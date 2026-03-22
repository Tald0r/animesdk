#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_A8A051C530035301;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UILEVELRESULTV2_MP_PAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA803270)
#define MOLEMOLE_UILEVELRESULTV2_MP_PAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA8032B0)
#define MOLEMOLE_UILEVELRESULTV2_MP_PAGECONTROLLER___C__EXTRACTPLAYERINFO_B__38_1_OFFSET UNITYSDK_OFFSET(0xA8033C0)
#define MOLEMOLE_UILEVELRESULTV2_MP_PAGECONTROLLER___C___REFRESHAVATARINFO_B__26_0_OFFSET UNITYSDK_OFFSET(0xA8032C0)

namespace MoleMole
{
	inline static constexpr unsigned int UILevelResultV2_MP_PageController___c_TypeDefinitionIndex = 48427;

	class UILevelResultV2_MP_PageController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_3_A8A051C530035301*, ::System::UInt32>** StaticGet___9__26_0()
		{
			return (::System::Func_2<::Class_3_A8A051C530035301*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(UILevelResultV2_MP_PageController___c_TypeDefinitionIndex)->GetStaticField(0x42780);
		}
		static ::System::Func_2<::Class_3_A8A051C530035301*, ::System::UInt32>** StaticGet___9__38_1()
		{
			return (::System::Func_2<::Class_3_A8A051C530035301*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(UILevelResultV2_MP_PageController___c_TypeDefinitionIndex)->GetStaticField(0x42788);
		}
		static ::MoleMole::UILevelResultV2_MP_PageController___c** StaticGet___9()
		{
			return (::MoleMole::UILevelResultV2_MP_PageController___c**)Il2CppClass::FromTypeDefinitionIndex(UILevelResultV2_MP_PageController___c_TypeDefinitionIndex)->GetStaticField(0x42790);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTV2_MP_PAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTV2_MP_PAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 __RefreshAvatarInfo_b__26_0(::Class_3_A8A051C530035301* p)
		{
			return ((::System::UInt32(*)(::PVOID, ::Class_3_A8A051C530035301*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTV2_MP_PAGECONTROLLER___C___REFRESHAVATARINFO_B__26_0_OFFSET))(this, p);
		}

		::System::UInt32 _ExtractPlayerInfo_b__38_1(::Class_3_A8A051C530035301* p)
		{
			return ((::System::UInt32(*)(::PVOID, ::Class_3_A8A051C530035301*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTV2_MP_PAGECONTROLLER___C__EXTRACTPLAYERINFO_B__38_1_OFFSET))(this, p);
		}
	};
}
