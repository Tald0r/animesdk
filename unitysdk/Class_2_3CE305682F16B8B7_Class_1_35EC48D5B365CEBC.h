#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define CLASS_2_3CE305682F16B8B7_CLASS_1_35EC48D5B365CEBC_METHOD_1_2E669E36541782B5_OFFSET UNITYSDK_OFFSET(0x884EF60)
#define CLASS_2_3CE305682F16B8B7_CLASS_1_35EC48D5B365CEBC_METHOD_1_312C00EB62C83363_OFFSET UNITYSDK_OFFSET(0x884EE30)
#define CLASS_2_3CE305682F16B8B7_CLASS_1_35EC48D5B365CEBC_METHOD_1_FA662896843C137A_OFFSET UNITYSDK_OFFSET(0x884EDB0)
#define CLASS_2_3CE305682F16B8B7_CLASS_1_35EC48D5B365CEBC__CCTOR_OFFSET UNITYSDK_OFFSET(0x884F1B0)
#define CLASS_2_3CE305682F16B8B7_CLASS_1_35EC48D5B365CEBC__CTOR_OFFSET UNITYSDK_OFFSET(0x884EAD0)

inline static constexpr unsigned int Class_2_3CE305682F16B8B7_Class_1_35EC48D5B365CEBC_TypeDefinitionIndex = 60986;

class Class_2_3CE305682F16B8B7_Class_1_35EC48D5B365CEBC : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_3CE305682F16B8B7_Class_1_35EC48D5B365CEBC_TypeDefinitionIndex)->GetStaticField(0xF9C0);
	}
	::UnityEngine::Transform* Field_1_1; // 0x10
	::UnityEngine::Quaternion Field_1_4; // 0x18
	::UnityEngine::Quaternion Field_1_3; // 0x28
	::UnityEngine::Vector3 Field_1_2; // 0x38

	::System::Void _ctor(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_3CE305682F16B8B7_CLASS_1_35EC48D5B365CEBC__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_3CE305682F16B8B7_CLASS_1_35EC48D5B365CEBC__CCTOR_OFFSET))();
	}

	::UnityEngine::Vector3 Method_1_FA662896843C137A()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CE305682F16B8B7_CLASS_1_35EC48D5B365CEBC_METHOD_1_FA662896843C137A_OFFSET))(this);
	}

	::System::Void Method_1_312C00EB62C83363(::System::Single a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_3CE305682F16B8B7_CLASS_1_35EC48D5B365CEBC_METHOD_1_312C00EB62C83363_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2E669E36541782B5(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_3CE305682F16B8B7_CLASS_1_35EC48D5B365CEBC_METHOD_1_2E669E36541782B5_OFFSET))(this, a1);
	}
};
