var samples = process.argv[2];

console.log("const PROGMEM unsigned char SinTable[] = ");
console.log("{");
for (i = 0; i < samples; i++)
{
  angle = i * (360/samples);
  value = Math.round((Math.sin(angle/180 * Math.PI) * 127) + 127);
  console.log("	" + value + ", //" + i + " angle: " + angle);
}
console.log("};")
