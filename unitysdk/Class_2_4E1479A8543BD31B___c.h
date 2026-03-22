#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_4E1479A8543BD31B___C_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x6F26290)
#define CLASS_2_4E1479A8543BD31B___C_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x6F26280)
#define CLASS_2_4E1479A8543BD31B___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x6F26230)
#define CLASS_2_4E1479A8543BD31B___C__CTOR_OFFSET UNITYSDK_OFFSET(0x6F26270)

inline static constexpr unsigned int Class_2_4E1479A8543BD31B___c_TypeDefinitionIndex = 46041;

class Class_2_4E1479A8543BD31B___c : public ::System::Object
{
public:
	static ::Class_2_4E1479A8543BD31B___c** StaticGet___9()
	{
		return (::Class_2_4E1479A8543BD31B___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_4E1479A8543BD31B___c_TypeDefinitionIndex)->GetStaticField(0x37B00);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__8_5()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_4E1479A8543BD31B___c_TypeDefinitionIndex)->GetStaticField(0x37B08);
	}
	static ::System::Action** StaticGet___9__13_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_2_4E1479A8543BD31B___c_TypeDefinitionIndex)->GetStaticField(0x37B10);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_4E1479A8543BD31B___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4E1479A8543BD31B___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4E1479A8543BD31B___C_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4E1479A8543BD31B___C_METHOD_1_128774387667156B_OFFSET))(this);
	}
};
