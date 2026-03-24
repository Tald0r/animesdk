#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_CF7C69273BEAA52F;

#define CLASS_1_CF7C69273BEAA52F_CLASS_1_52E4CFB06F97A58D_METHOD_1_1DD8A8CBEBE72080_OFFSET UNITYSDK_OFFSET(0x69C4970)
#define CLASS_1_CF7C69273BEAA52F_CLASS_1_52E4CFB06F97A58D__CTOR_OFFSET UNITYSDK_OFFSET(0x69C4960)

inline static constexpr unsigned int Class_1_CF7C69273BEAA52F_Class_1_52E4CFB06F97A58D_TypeDefinitionIndex = 46325;

class Class_1_CF7C69273BEAA52F_Class_1_52E4CFB06F97A58D : public ::System::Object
{
public:
	::Class_1_CF7C69273BEAA52F* Field_1_0; // 0x10
	::UnityEngine::Vector2 Field_1_2; // 0x18
	::UnityEngine::Bounds Field_1_1; // 0x20
	::System::Single Field_1_3; // 0x38
	::System::Single Field_1_4; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CF7C69273BEAA52F_CLASS_1_52E4CFB06F97A58D__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_1DD8A8CBEBE72080(::UnityEngine::Vector2 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_CF7C69273BEAA52F_CLASS_1_52E4CFB06F97A58D_METHOD_1_1DD8A8CBEBE72080_OFFSET))(this, a1);
	}
};
