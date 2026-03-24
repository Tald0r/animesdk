#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3659D99D9E0DCBB9_2.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIVRBOSSBATTLEPAGECONTROLLER___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x790BFB0)
#define MOLEMOLE_UIVRBOSSBATTLEPAGECONTROLLER___C__DISPLAYCLASS16_0__ONSHOW_B__3_OFFSET UNITYSDK_OFFSET(0x790BFC0)
#define MOLEMOLE_UIVRBOSSBATTLEPAGECONTROLLER___C__DISPLAYCLASS16_0__ONSHOW_B__4_OFFSET UNITYSDK_OFFSET(0x790C000)

namespace MoleMole
{
	inline static constexpr unsigned int UIVRBossBattlePageController___c__DisplayClass16_0_TypeDefinitionIndex = 52600;

	class UIVRBossBattlePageController___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::System::Int32 materialItemId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBOSSBATTLEPAGECONTROLLER___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnShow_b__3(::Struct_2_3659D99D9E0DCBB9_2 preview)
		{
			return ((::System::Boolean(*)(::PVOID, ::Struct_2_3659D99D9E0DCBB9_2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBOSSBATTLEPAGECONTROLLER___C__DISPLAYCLASS16_0__ONSHOW_B__3_OFFSET))(this, preview);
		}

		::System::Boolean _OnShow_b__4(::Struct_2_3659D99D9E0DCBB9_2 preview)
		{
			return ((::System::Boolean(*)(::PVOID, ::Struct_2_3659D99D9E0DCBB9_2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBOSSBATTLEPAGECONTROLLER___C__DISPLAYCLASS16_0__ONSHOW_B__4_OFFSET))(this, preview);
		}
	};
}
