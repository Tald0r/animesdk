#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

class Class_1_046DE42B03CEC3F3;
namespace System { class String; }
namespace UnityEngine { class Object; }
namespace miHoYoEmotion { class SequenceBakeData; }

#define CLASS_1_046DE42B03CEC3F3_CLASS_1_A505EA454EEB16F2_METHOD_1_B73A6C7B16CCC9F6_OFFSET UNITYSDK_OFFSET(0xB81BAD0)
#define CLASS_1_046DE42B03CEC3F3_CLASS_1_A505EA454EEB16F2_METHOD_1_CA64DF27FC7D69EF_OFFSET UNITYSDK_OFFSET(0xB81BC30)
#define CLASS_1_046DE42B03CEC3F3_CLASS_1_A505EA454EEB16F2__CTOR_OFFSET UNITYSDK_OFFSET(0xB81BAC0)

inline static constexpr unsigned int Class_1_046DE42B03CEC3F3_Class_1_A505EA454EEB16F2_TypeDefinitionIndex = 43936;

class Class_1_046DE42B03CEC3F3_Class_1_A505EA454EEB16F2 : public ::System::Object
{
public:
	::Class_1_046DE42B03CEC3F3* Field_1_1; // 0x10
	::System::String* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_046DE42B03CEC3F3_CLASS_1_A505EA454EEB16F2__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_B73A6C7B16CCC9F6(::System::String* a1, ::miHoYoEmotion::SequenceBakeData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::miHoYoEmotion::SequenceBakeData*))((::PBYTE)hIl2Cpp + CLASS_1_046DE42B03CEC3F3_CLASS_1_A505EA454EEB16F2_METHOD_1_B73A6C7B16CCC9F6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA64DF27FC7D69EF(::UnityEngine::Object* a1, ::Foundation::AssetRequestHandle a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + CLASS_1_046DE42B03CEC3F3_CLASS_1_A505EA454EEB16F2_METHOD_1_CA64DF27FC7D69EF_OFFSET))(this, a1, a2);
	}
};
