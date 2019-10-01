#ifndef _cMesh_HG_
#define _cMesh_HG_

#include <vector>		// "smart array"

// This structure matches the file, so that our life is
//   simpler and happier, and we all get along.
struct sPlyVertexXYZ
{
	float x, y, z;
	float nx, ny, nz;		// NOW with NORMALS!!
	unsigned char red, green, blue, alpha;
};

struct sPlyTriangle
{
	unsigned int vert_index_1;
	unsigned int vert_index_2;
	unsigned int vert_index_3;
};

class cMesh
{
public:
	cMesh() {};			// Empty c'tor
	~cMesh() {};		// Empty d'tor
	// Store the vertices

	std::vector<sPlyVertexXYZ> m_vecVertices;

	// Store the triangles
	std::vector<sPlyTriangle> m_vecTriangles;

	typedef std::pair <std::string, std::string> property;

	bool m_hasNormals = false;
	bool m_hasColor = false;
	bool m_isValid = false;
	std::string m_type = "unknown";
	std::string m_format = "unknown";
	unsigned int m_vertices = 0;
	unsigned int m_faces = 0;
	std::vector< property > m_vecProperties;
};

#endif 
