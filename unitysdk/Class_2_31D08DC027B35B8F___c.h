#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_31D08DC027B35B8F_Enum_3_94F3E8DA9C14F011.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_1_5A585DEB704A07E2;
namespace System { template <typename T1, typename T2> class Converter_2; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_31D08DC027B35B8F___C_METHOD_1_64E489C753DA3D70_OFFSET UNITYSDK_OFFSET(0xBDB3B10)
#define CLASS_2_31D08DC027B35B8F___C_METHOD_1_FEA6C6C688D8477B_OFFSET UNITYSDK_OFFSET(0xBDB3B20)
#define CLASS_2_31D08DC027B35B8F___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBDB3AC0)
#define CLASS_2_31D08DC027B35B8F___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBDB3B00)

inline static constexpr unsigned int Class_2_31D08DC027B35B8F___c_TypeDefinitionIndex = 76184;

class Class_2_31D08DC027B35B8F___c : public ::System::Object
{
public:
	static ::System::Converter_2<::System::Int32, ::Class_2_31D08DC027B35B8F_Enum_3_94F3E8DA9C14F011>** StaticGet___9__44_0()
	{
		return (::System::Converter_2<::System::Int32, ::Class_2_31D08DC027B35B8F_Enum_3_94F3E8DA9C14F011>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_31D08DC027B35B8F___c_TypeDefinitionIndex)->GetStaticField(0x35D50);
	}
	static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::Class_1_5A585DEB704A07E2*>, ::System::Boolean>** StaticGet___9__43_0()
	{
		return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::Class_1_5A585DEB704A07E2*>, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_31D08DC027B35B8F___c_TypeDefinitionIndex)->GetStaticField(0x35D58);
	}
	static ::Class_2_31D08DC027B35B8F___c** StaticGet___9()
	{
		return (::Class_2_31D08DC027B35B8F___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_31D08DC027B35B8F___c_TypeDefinitionIndex)->GetStaticField(0x35D60);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_31D08DC027B35B8F___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31D08DC027B35B8F___C__CTOR_OFFSET))(this);
	}

	::Class_2_31D08DC027B35B8F_Enum_3_94F3E8DA9C14F011 Method_1_64E489C753DA3D70(::System::Int32 a1)
	{
		return ((::Class_2_31D08DC027B35B8F_Enum_3_94F3E8DA9C14F011(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_31D08DC027B35B8F___C_METHOD_1_64E489C753DA3D70_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_FEA6C6C688D8477B(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::Class_1_5A585DEB704A07E2*> a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::Class_1_5A585DEB704A07E2*>))((::PBYTE)hIl2Cpp + CLASS_2_31D08DC027B35B8F___C_METHOD_1_FEA6C6C688D8477B_OFFSET))(this, a1);
	}
};
