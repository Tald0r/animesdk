#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F019D5BE4A3284F8.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_5A585DEB704A07E2;
namespace MoleMole { class UIGeneralNewHintWidgetController; }
namespace MoleMole { class UIGeneralPopNumHintWidgetController; }
namespace MoleMole { class UIGeneralPopUpHintWidgetController; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_D4EFF0C8147DB5B1_METHOD_1_06A2B758FCB8A24E_OFFSET UNITYSDK_OFFSET(0xABE74E0)
#define CLASS_1_D4EFF0C8147DB5B1_METHOD_1_4D395DE7080248C4_OFFSET UNITYSDK_OFFSET(0xABE6150)
#define CLASS_1_D4EFF0C8147DB5B1_METHOD_1_502E4F13BFB605D5_OFFSET UNITYSDK_OFFSET(0xABE62C0)
#define CLASS_1_D4EFF0C8147DB5B1_METHOD_1_641B0E011994D7E4_OFFSET UNITYSDK_OFFSET(0xABE7570)
#define CLASS_1_D4EFF0C8147DB5B1_METHOD_1_852B3D0C348514D2_OFFSET UNITYSDK_OFFSET(0xABE6A30)
#define CLASS_1_D4EFF0C8147DB5B1_METHOD_1_C5926AD41CA657B2_OFFSET UNITYSDK_OFFSET(0xABE6530)
#define CLASS_1_D4EFF0C8147DB5B1_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0xABE7450)
#define CLASS_1_D4EFF0C8147DB5B1__CTOR_OFFSET UNITYSDK_OFFSET(0xABE6130)

inline static constexpr unsigned int Class_1_D4EFF0C8147DB5B1_TypeDefinitionIndex = 69355;

class Class_1_D4EFF0C8147DB5B1 : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_0; // 0x10
	::MoleMole::UIGeneralPopNumHintWidgetController* Field_1_3; // 0x18
	::MoleMole::UIGeneralNewHintWidgetController* Field_1_2; // 0x20
	::System::Action_1<::System::Boolean>* Field_1_6; // 0x28
	::MoleMole::UIGeneralPopUpHintWidgetController* Field_1_1; // 0x30
	::UnityEngine::Vector3 Field_1_5; // 0x38
	::System::Boolean Field_1_4; // 0x44

	::System::Void _ctor(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_D4EFF0C8147DB5B1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_4D395DE7080248C4(::Class_1_5A585DEB704A07E2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5A585DEB704A07E2*))((::PBYTE)hIl2Cpp + CLASS_1_D4EFF0C8147DB5B1_METHOD_1_4D395DE7080248C4_OFFSET))(this, a1);
	}

	::System::Void Method_1_502E4F13BFB605D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4EFF0C8147DB5B1_METHOD_1_502E4F13BFB605D5_OFFSET))(this);
	}

	::System::Void Method_1_C5926AD41CA657B2(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_D4EFF0C8147DB5B1_METHOD_1_C5926AD41CA657B2_OFFSET))(this, a1);
	}

	::System::Void Method_1_852B3D0C348514D2(::Enum_3_F019D5BE4A3284F8 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_F019D5BE4A3284F8))((::PBYTE)hIl2Cpp + CLASS_1_D4EFF0C8147DB5B1_METHOD_1_852B3D0C348514D2_OFFSET))(this, a1);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4EFF0C8147DB5B1_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Void Method_1_06A2B758FCB8A24E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4EFF0C8147DB5B1_METHOD_1_06A2B758FCB8A24E_OFFSET))(this);
	}

	::System::Void Method_1_641B0E011994D7E4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4EFF0C8147DB5B1_METHOD_1_641B0E011994D7E4_OFFSET))(this);
	}
};
