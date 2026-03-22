#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ConfigMainCityObject;
class MainCityObjectState_ScriptConfig;
class TrafficRedLimitArea;
namespace MoleMole { class ClientSceneObjectStateLooperConfigBase; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D1A39248C7FD4396_METHOD_1_0BE1846AC20D43BE_OFFSET UNITYSDK_OFFSET(0x7050540)
#define CLASS_1_D1A39248C7FD4396_METHOD_1_78557C8E2ADCF2F7_OFFSET UNITYSDK_OFFSET(0x7050390)
#define CLASS_1_D1A39248C7FD4396_METHOD_1_A8AE4A9A45E37F95_OFFSET UNITYSDK_OFFSET(0x7050430)
#define CLASS_1_D1A39248C7FD4396_METHOD_1_B5A9936BC41012CF_OFFSET UNITYSDK_OFFSET(0x70507A0)
#define CLASS_1_D1A39248C7FD4396_METHOD_1_D7FE3FCFB1E0B054_OFFSET UNITYSDK_OFFSET(0x7050840)
#define CLASS_1_D1A39248C7FD4396_METHOD_1_EF8D2ED172F4A640_OFFSET UNITYSDK_OFFSET(0x7050AE0)

inline static constexpr unsigned int Class_1_D1A39248C7FD4396_TypeDefinitionIndex = 59844;

class Class_1_D1A39248C7FD4396 : public ::System::Object
{
public:
	static ::ConfigMainCityObject** StaticGet_Field_1_0()
	{
		return (::ConfigMainCityObject**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D1A39248C7FD4396_TypeDefinitionIndex)->GetStaticField(0x3E440);
	}

	static ::MainCityObjectState_ScriptConfig* Method_1_78557C8E2ADCF2F7(::System::String* a1)
	{
		return ((::MainCityObjectState_ScriptConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D1A39248C7FD4396_METHOD_1_78557C8E2ADCF2F7_OFFSET))(a1);
	}

	static ::System::Void Method_1_A8AE4A9A45E37F95(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D1A39248C7FD4396_METHOD_1_A8AE4A9A45E37F95_OFFSET))(a1, a2, a3, a4);
	}

	static ::TrafficRedLimitArea* Method_1_B5A9936BC41012CF(::System::String* a1)
	{
		return ((::TrafficRedLimitArea*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D1A39248C7FD4396_METHOD_1_B5A9936BC41012CF_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_D7FE3FCFB1E0B054(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D1A39248C7FD4396_METHOD_1_D7FE3FCFB1E0B054_OFFSET))(a1);
	}

	static ::System::Void Method_1_0BE1846AC20D43BE(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_D1A39248C7FD4396_METHOD_1_0BE1846AC20D43BE_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::List_1<::MoleMole::ClientSceneObjectStateLooperConfigBase*>* Method_1_EF8D2ED172F4A640()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::ClientSceneObjectStateLooperConfigBase*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D1A39248C7FD4396_METHOD_1_EF8D2ED172F4A640_OFFSET))();
	}
};
