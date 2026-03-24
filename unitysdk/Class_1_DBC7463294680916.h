#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_87F855E9737731A7;
class Class_2_B465613E80DCD908;
class MainCityObjectState_ScriptConfig;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_DBC7463294680916_METHOD_1_33F5F00D73A3D752_OFFSET UNITYSDK_OFFSET(0x8902DB0)
#define CLASS_1_DBC7463294680916_METHOD_1_61CF8BB17BA6E724_OFFSET UNITYSDK_OFFSET(0x8902C80)
#define CLASS_1_DBC7463294680916_METHOD_1_8EB27D281ACA7277_OFFSET UNITYSDK_OFFSET(0x89030A0)
#define CLASS_1_DBC7463294680916_METHOD_1_D0D828ED30757AA6_OFFSET UNITYSDK_OFFSET(0x8902F00)
#define CLASS_1_DBC7463294680916__CTOR_OFFSET UNITYSDK_OFFSET(0x8902970)

inline static constexpr unsigned int Class_1_DBC7463294680916_TypeDefinitionIndex = 46721;

class Class_1_DBC7463294680916 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_87F855E9737731A7*>* Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18

	::System::Void _ctor(::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_B465613E80DCD908*>* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_B465613E80DCD908*>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_DBC7463294680916__CTOR_OFFSET))(this, a1, a2);
	}

	::MainCityObjectState_ScriptConfig* Method_1_61CF8BB17BA6E724(::System::String* a1)
	{
		return ((::MainCityObjectState_ScriptConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DBC7463294680916_METHOD_1_61CF8BB17BA6E724_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_33F5F00D73A3D752(::System::String* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DBC7463294680916_METHOD_1_33F5F00D73A3D752_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_D0D828ED30757AA6()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DBC7463294680916_METHOD_1_D0D828ED30757AA6_OFFSET))(this);
	}

	::Class_1_87F855E9737731A7* Method_1_8EB27D281ACA7277(::System::Int32 a1)
	{
		return ((::Class_1_87F855E9737731A7*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_DBC7463294680916_METHOD_1_8EB27D281ACA7277_OFFSET))(this, a1);
	}
};
