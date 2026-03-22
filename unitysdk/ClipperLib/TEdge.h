#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ClipperLib/EdgeSide.h"
#include "unitysdk/ClipperLib/IntPoint.h"
#include "unitysdk/ClipperLib/PolyType.h"
#include "unitysdk/System/Object.h"

#define CLIPPERLIB_TEDGE__CTOR_OFFSET UNITYSDK_OFFSET(0x19BB2A00)

namespace ClipperLib
{
	inline static constexpr unsigned int TEdge_TypeDefinitionIndex = 29747;

	class TEdge : public ::System::Object
	{
	public:
		::ClipperLib::TEdge* Next; // 0x10
		::ClipperLib::TEdge* Prev; // 0x18
		::ClipperLib::TEdge* NextInSEL; // 0x20
		::ClipperLib::TEdge* PrevInSEL; // 0x28
		::ClipperLib::TEdge* NextInLML; // 0x30
		::ClipperLib::TEdge* PrevInAEL; // 0x38
		::ClipperLib::TEdge* NextInAEL; // 0x40
		::System::Int32 WindCnt; // 0x48
		::System::Int32 OutIdx; // 0x4C
		::System::Int32 WindCnt2; // 0x50
		::ClipperLib::PolyType PolyTyp; // 0x54
		::ClipperLib::EdgeSide Side; // 0x58
		::System::Int32 WindDelta; // 0x5C
		::ClipperLib::IntPoint Top; // 0x60
		::ClipperLib::IntPoint Bot; // 0x70
		::System::Double Dx; // 0x80
		::ClipperLib::IntPoint Delta; // 0x88
		::ClipperLib::IntPoint Curr; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIPPERLIB_TEDGE__CTOR_OFFSET))(this);
		}
	};
}
