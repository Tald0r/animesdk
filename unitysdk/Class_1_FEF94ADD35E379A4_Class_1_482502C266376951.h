#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EUILayoutPlatform.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define CLASS_1_FEF94ADD35E379A4_CLASS_1_482502C266376951_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xD08DB30)
#define CLASS_1_FEF94ADD35E379A4_CLASS_1_482502C266376951_METHOD_1_5C081A3659FF5C3F_OFFSET UNITYSDK_OFFSET(0xD08DAA0)
#define CLASS_1_FEF94ADD35E379A4_CLASS_1_482502C266376951_METHOD_1_64501B5CB67A94C3_OFFSET UNITYSDK_OFFSET(0xD08D940)
#define CLASS_1_FEF94ADD35E379A4_CLASS_1_482502C266376951__CTOR_OFFSET UNITYSDK_OFFSET(0xD08D930)

inline static constexpr unsigned int Class_1_FEF94ADD35E379A4_Class_1_482502C266376951_TypeDefinitionIndex = 74394;

class Class_1_FEF94ADD35E379A4_Class_1_482502C266376951 : public ::System::Object
{
public:
	::UnityEngine::GameObject* Field_1_0; // 0x10
	::MoleMole::EUILayoutPlatform Field_1_1; // 0x18

	::System::Void _ctor(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_FEF94ADD35E379A4_CLASS_1_482502C266376951__CTOR_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* Method_1_5C081A3659FF5C3F()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FEF94ADD35E379A4_CLASS_1_482502C266376951_METHOD_1_5C081A3659FF5C3F_OFFSET))(this);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FEF94ADD35E379A4_CLASS_1_482502C266376951_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_1_64501B5CB67A94C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FEF94ADD35E379A4_CLASS_1_482502C266376951_METHOD_1_64501B5CB67A94C3_OFFSET))(this);
	}
};
