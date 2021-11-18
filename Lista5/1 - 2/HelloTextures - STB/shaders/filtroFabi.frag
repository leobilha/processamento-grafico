#version 400 core
in vec3 ourColor;
in vec2 TexCoord;
out vec4 color;

// Texture sampler
uniform sampler2D ourTexture1;

void main()
{
    color = texture(ourTexture1, TexCoord); // * vec4(ourColor, 1.0);
	
	color.r = color.r * color.g;
	color.g = color.g - color.b;
	color.b = 0;

}