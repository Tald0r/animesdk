#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_5_2169ABC757988FED;
namespace MoleMole { class TextureSheetData; }

#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS59_0__CREATECHANGELAYERTEMPCHESSBOARD_B__0_OFFSET UNITYSDK_OFFSET(0x80B1D20)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS59_0__CTOR_OFFSET UNITYSDK_OFFSET(0x80B1D10)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowMainPageController___c__DisplayClass59_0_TypeDefinitionIndex = 52576;

	class UIHollowMainPageController___c__DisplayClass59_0 : public ::System::Object
	{
	public:
		::MoleMole::TextureSheetData* textureSheetData; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS59_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _CreateChangeLayerTempChessboard_b__0(::Class_5_2169ABC757988FED* uiHollowChessPiece3DModelController)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_5_2169ABC757988FED*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS59_0__CREATECHANGELAYERTEMPCHESSBOARD_B__0_OFFSET))(this, uiHollowChessPiece3DModelController);
		}
	};
}
