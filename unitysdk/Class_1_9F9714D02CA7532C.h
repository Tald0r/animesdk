#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ConfigTextureColor;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_9F9714D02CA7532C_METHOD_1_0BE1846AC20D43BE_OFFSET UNITYSDK_OFFSET(0x8365980)
#define CLASS_1_9F9714D02CA7532C_METHOD_1_60AB7DB0B4C90108_OFFSET UNITYSDK_OFFSET(0x83656F0)
#define CLASS_1_9F9714D02CA7532C_METHOD_1_D07EA7D20E3060A4_OFFSET UNITYSDK_OFFSET(0x8365910)
#define CLASS_1_9F9714D02CA7532C_METHOD_1_FDDC5A41F149A0CC_OFFSET UNITYSDK_OFFSET(0x8365780)

inline static constexpr unsigned int Class_1_9F9714D02CA7532C_TypeDefinitionIndex = 42629;

class Class_1_9F9714D02CA7532C : public ::System::Object
{
public:
	static ::ConfigTextureColor** StaticGet_Field_1_0()
	{
		return (::ConfigTextureColor**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9F9714D02CA7532C_TypeDefinitionIndex)->GetStaticField(0x337F0);
	}

	static ::ConfigTextureColor* Method_1_60AB7DB0B4C90108()
	{
		return ((::ConfigTextureColor*(*)())((::PBYTE)hIl2Cpp + CLASS_1_9F9714D02CA7532C_METHOD_1_60AB7DB0B4C90108_OFFSET))();
	}

	static ::System::Void Method_1_FDDC5A41F149A0CC(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9F9714D02CA7532C_METHOD_1_FDDC5A41F149A0CC_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_D07EA7D20E3060A4(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_9F9714D02CA7532C_METHOD_1_D07EA7D20E3060A4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0BE1846AC20D43BE(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_9F9714D02CA7532C_METHOD_1_0BE1846AC20D43BE_OFFSET))(a1, a2);
	}
};
