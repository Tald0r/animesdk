#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ClipperLib/EdgeSide.h"
#include "unitysdk/ClipperLib/IntPoint.h"
#include "unitysdk/ClipperLib/PolyType.h"
#include "unitysdk/System/Object.h"

#define CLIPPERLIB_TEDGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A197100)

namespace ClipperLib
{
	inline static constexpr unsigned int TEdge_TypeDefinitionIndex = 30700;

	class TEdge : public ::System::Object
	{
	public:
		::ClipperLib::TEdge* PrevInAEL; // 0x10
		::ClipperLib::TEdge* Prev; // 0x18
		::ClipperLib::TEdge* NextInAEL; // 0x20
		::ClipperLib::TEdge* Next; // 0x28
		::ClipperLib::TEdge* NextInSEL; // 0x30
		::ClipperLib::TEdge* PrevInSEL; // 0x38
		::ClipperLib::TEdge* NextInLML; // 0x40
		::System::Int32 WindDelta; // 0x48
		::System::Int32 WindCnt; // 0x4C
		::ClipperLib::PolyType PolyTyp; // 0x50
		::ClipperLib::EdgeSide Side; // 0x54
		::System::Double Dx; // 0x58
		::ClipperLib::IntPoint Curr; // 0x60
		::System::Int32 OutIdx; // 0x70
		::System::Int32 WindCnt2; // 0x74
		::ClipperLib::IntPoint Top; // 0x78
		::ClipperLib::IntPoint Delta; // 0x88
		::ClipperLib::IntPoint Bot; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIPPERLIB_TEDGE__CTOR_OFFSET))(this);
		}
	};
}
