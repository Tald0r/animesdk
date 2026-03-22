#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F019D5BE4A3284F8.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_79526D80B8F6897C;
namespace MoleMole { class UIGeneralNewHintWidgetController; }
namespace MoleMole { class UIGeneralPopNumHintWidgetController; }
namespace MoleMole { class UIGeneralPopUpHintWidgetController; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_D4EFF0C8147DB5B1_METHOD_1_06A2B758FCB8A24E_OFFSET UNITYSDK_OFFSET(0xA472990)
#define CLASS_1_D4EFF0C8147DB5B1_METHOD_1_4D395DE7080248C4_OFFSET UNITYSDK_OFFSET(0xA4718F0)
#define CLASS_1_D4EFF0C8147DB5B1_METHOD_1_502E4F13BFB605D5_OFFSET UNITYSDK_OFFSET(0xA472A20)
#define CLASS_1_D4EFF0C8147DB5B1_METHOD_1_641B0E011994D7E4_OFFSET UNITYSDK_OFFSET(0xA472C90)
#define CLASS_1_D4EFF0C8147DB5B1_METHOD_1_852B3D0C348514D2_OFFSET UNITYSDK_OFFSET(0xA471A60)
#define CLASS_1_D4EFF0C8147DB5B1_METHOD_1_C5926AD41CA657B2_OFFSET UNITYSDK_OFFSET(0xA472490)
#define CLASS_1_D4EFF0C8147DB5B1_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0xA473130)
#define CLASS_1_D4EFF0C8147DB5B1__CTOR_OFFSET UNITYSDK_OFFSET(0xA4718D0)

inline static constexpr unsigned int Class_1_D4EFF0C8147DB5B1_TypeDefinitionIndex = 38346;

class Class_1_D4EFF0C8147DB5B1 : public ::System::Object
{
public:
	::MoleMole::UIGeneralNewHintWidgetController* Field_1_2; // 0x10
	::MoleMole::UIGeneralPopNumHintWidgetController* Field_1_3; // 0x18
	::MoleMole::UIGeneralPopUpHintWidgetController* Field_1_1; // 0x20
	::UnityEngine::Transform* Field_1_0; // 0x28
	::System::Action_1<::System::Boolean>* Field_1_6; // 0x30
	::System::Boolean Field_1_4; // 0x38
	::UnityEngine::Vector3 Field_1_5; // 0x3C

	::System::Void _ctor(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_D4EFF0C8147DB5B1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_4D395DE7080248C4(::Class_1_79526D80B8F6897C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_79526D80B8F6897C*))((::PBYTE)hIl2Cpp + CLASS_1_D4EFF0C8147DB5B1_METHOD_1_4D395DE7080248C4_OFFSET))(this, a1);
	}

	::System::Void Method_1_852B3D0C348514D2(::Enum_3_F019D5BE4A3284F8 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_F019D5BE4A3284F8))((::PBYTE)hIl2Cpp + CLASS_1_D4EFF0C8147DB5B1_METHOD_1_852B3D0C348514D2_OFFSET))(this, a1);
	}

	::System::Void Method_1_C5926AD41CA657B2(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_D4EFF0C8147DB5B1_METHOD_1_C5926AD41CA657B2_OFFSET))(this, a1);
	}

	::System::Void Method_1_06A2B758FCB8A24E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4EFF0C8147DB5B1_METHOD_1_06A2B758FCB8A24E_OFFSET))(this);
	}

	::System::Void Method_1_502E4F13BFB605D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4EFF0C8147DB5B1_METHOD_1_502E4F13BFB605D5_OFFSET))(this);
	}

	::System::Void Method_1_641B0E011994D7E4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4EFF0C8147DB5B1_METHOD_1_641B0E011994D7E4_OFFSET))(this);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4EFF0C8147DB5B1_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}
};
