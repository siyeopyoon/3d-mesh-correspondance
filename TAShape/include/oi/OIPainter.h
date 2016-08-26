#ifndef OPEN_INVENTOR_SHAPE_PAINTER_H
#define OPEN_INVENTOR_SHAPE_PAINTER_H

#include <Inventor/nodes/SoSeparator.h>
#include <Inventor/nodes/SoMaterial.h>
#include <Inventor/nodes/SoCoordinate3.h>
#include <Inventor/nodes/SoIndexedFaceSet.h>
#include <Inventor/nodes/SoShapeHints.h>
#include <core/PolygonMesh.h>

namespace TAShape
{
	class OIPainter
	{
		OIPainter();
		OIPainter(const OIPainter&);
	public:
		static SoSeparator* getShapeSep(PolygonMesh* mesh);
		/*static SoSeparator* getColorSep(PolygonMesh* mesh, unsigned int nColors, bool distColor);*/
		/*static SoSeparator* getVertexSphereSep(Vertex *ver, float radius, SoMaterial* mat);*/
		/*static SoSeparator* getLineBetweenTwoSep(PolygonMesh *mesh, Vertex *ver1, Vertex *ver2);*/
	};
}

#endif