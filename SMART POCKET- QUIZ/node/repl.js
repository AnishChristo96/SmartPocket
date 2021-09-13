const fs = require("fs");

const { kural } = require("./thirukkural/thirukkural.json");
const detail = require("./thirukkural/detail.json");

function getDetails(kuralNumber) {
  for (let i = 0; i < detail[0].section.detail.length; i++) {
    const { chapterGroup } = detail[0].section.detail[i];

    for (let cgI = 0; cgI < chapterGroup.detail.length; cgI++) {
      const { chapters } = chapterGroup.detail[cgI];

      for (let cI = 0; cI < chapters.detail.length; cI++) {
        const { start, end } = chapters.detail[cI];
        if (kuralNumber >= start && kuralNumber <= end) {
          return chapters.detail[cI];
        }
      }
    }
  }
}

const cJson = [];
for (let i = 0; i < kural.length; i++) {
  const array = [];
  const { Number, transliteration1, transliteration2, explanation } = kural[i];
  const { number, transliteration } = getDetails(Number);

  array.push(`${Number}`);
  array.push(transliteration1);
  array.push(transliteration2);
  array.push(`${number}`);
  array.push(transliteration);

  const chunks = [];
  // longest explanation length is 210
  for (let i = 0; i < 210; i += 30) {
    chunks.push(explanation.substring(i, i + 30));
  }
  array.push(...chunks);

  cJson.push(array);

  console.log(
    Number,
    transliteration1,
    transliteration2,
    number,
    transliteration,
    chunks.join("")
  );
}

fs.writeFile("cJson.json", JSON.stringify(cJson), function (err) {
  if (err) throw err;

  console.log("cJson.json complete");
});
