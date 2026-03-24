#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NapRenderer;
namespace NPCCrowd::Avatar { class PartRendererOverrideInfo; }

#define CLASS_3_41A27529628F742C_CLASS_1_1EE17227708E9123_METHOD_1_D145EBDEF3E5E619_OFFSET UNITYSDK_OFFSET(0x92389D0)
#define CLASS_3_41A27529628F742C_CLASS_1_1EE17227708E9123__CTOR_OFFSET UNITYSDK_OFFSET(0x92389C0)

inline static constexpr unsigned int Class_3_41A27529628F742C_Class_1_1EE17227708E9123_TypeDefinitionIndex = 80075;

class Class_3_41A27529628F742C_Class_1_1EE17227708E9123 : public ::System::Object
{
public:
	::NPCCrowd::Avatar::PartRendererOverrideInfo* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_CLASS_1_1EE17227708E9123__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_D145EBDEF3E5E619(::NapRenderer* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::NapRenderer*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_CLASS_1_1EE17227708E9123_METHOD_1_D145EBDEF3E5E619_OFFSET))(this, a1);
	}
};
