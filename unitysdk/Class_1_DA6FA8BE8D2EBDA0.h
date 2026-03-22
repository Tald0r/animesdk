#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigFlowCanvasData; }
namespace MoleMole::Config { class ConfigFlowCanvasLevelData; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_DA6FA8BE8D2EBDA0_METHOD_1_0BE1846AC20D43BE_OFFSET UNITYSDK_OFFSET(0x6B7FD50)
#define CLASS_1_DA6FA8BE8D2EBDA0_METHOD_1_CF3DCEF0E0D8F88D_OFFSET UNITYSDK_OFFSET(0x6B7FA40)
#define CLASS_1_DA6FA8BE8D2EBDA0_METHOD_1_D19972D695971FE0_OFFSET UNITYSDK_OFFSET(0x6B7FBC0)
#define CLASS_1_DA6FA8BE8D2EBDA0_METHOD_1_FDDC5A41F149A0CC_OFFSET UNITYSDK_OFFSET(0x6B7FFB0)
#define CLASS_1_DA6FA8BE8D2EBDA0__CCTOR_OFFSET UNITYSDK_OFFSET(0x6B7F920)

inline static constexpr unsigned int Class_1_DA6FA8BE8D2EBDA0_TypeDefinitionIndex = 45345;

class Class_1_DA6FA8BE8D2EBDA0 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ConfigFlowCanvasLevelData*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ConfigFlowCanvasLevelData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DA6FA8BE8D2EBDA0_TypeDefinitionIndex)->GetStaticField(0x3C780);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigFlowCanvasData*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigFlowCanvasData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DA6FA8BE8D2EBDA0_TypeDefinitionIndex)->GetStaticField(0x3C788);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DA6FA8BE8D2EBDA0__CCTOR_OFFSET))();
	}

	static ::MoleMole::Config::ConfigFlowCanvasData* Method_1_CF3DCEF0E0D8F88D(::System::String* a1)
	{
		return ((::MoleMole::Config::ConfigFlowCanvasData*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DA6FA8BE8D2EBDA0_METHOD_1_CF3DCEF0E0D8F88D_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_D19972D695971FE0(::System::Int32 a1, ::MoleMole::Config::ConfigFlowCanvasLevelData*& a2)
	{
		return ((::System::Boolean(*)(::System::Int32, ::MoleMole::Config::ConfigFlowCanvasLevelData*&))((::PBYTE)hIl2Cpp + CLASS_1_DA6FA8BE8D2EBDA0_METHOD_1_D19972D695971FE0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0BE1846AC20D43BE(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_DA6FA8BE8D2EBDA0_METHOD_1_0BE1846AC20D43BE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FDDC5A41F149A0CC(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DA6FA8BE8D2EBDA0_METHOD_1_FDDC5A41F149A0CC_OFFSET))(a1, a2, a3, a4);
	}
};
