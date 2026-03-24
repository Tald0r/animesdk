#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_A8B98A73D524413D.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_1_D45ADB5492AB938B;
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_946637E2EE927FA0___C_METHOD_1_56F4630BA244FFDB_OFFSET UNITYSDK_OFFSET(0x1B1E9FB0)
#define CLASS_1_946637E2EE927FA0___C_METHOD_1_BCC7B979B8769B7B_OFFSET UNITYSDK_OFFSET(0x1B1E9FA0)
#define CLASS_1_946637E2EE927FA0___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B1E9F50)
#define CLASS_1_946637E2EE927FA0___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1E9F90)

inline static constexpr unsigned int Class_1_946637E2EE927FA0___c_TypeDefinitionIndex = 9267;

class Class_1_946637E2EE927FA0___c : public ::System::Object
{
public:
	static ::Class_1_946637E2EE927FA0___c** StaticGet___9()
	{
		return (::Class_1_946637E2EE927FA0___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_946637E2EE927FA0___c_TypeDefinitionIndex)->GetStaticField(0x81F0);
	}
	static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::Struct_2_A8B98A73D524413D<::System::Type*>, ::Class_1_D45ADB5492AB938B*>, ::Class_1_D45ADB5492AB938B*>** StaticGet___9__3_1()
	{
		return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::Struct_2_A8B98A73D524413D<::System::Type*>, ::Class_1_D45ADB5492AB938B*>, ::Class_1_D45ADB5492AB938B*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_946637E2EE927FA0___c_TypeDefinitionIndex)->GetStaticField(0x81F8);
	}
	static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::Struct_2_A8B98A73D524413D<::System::Type*>, ::Class_1_D45ADB5492AB938B*>, ::Struct_2_A8B98A73D524413D<::System::Type*>>** StaticGet___9__3_0()
	{
		return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::Struct_2_A8B98A73D524413D<::System::Type*>, ::Class_1_D45ADB5492AB938B*>, ::Struct_2_A8B98A73D524413D<::System::Type*>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_946637E2EE927FA0___c_TypeDefinitionIndex)->GetStaticField(0x8200);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_946637E2EE927FA0___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_946637E2EE927FA0___C__CTOR_OFFSET))(this);
	}

	::Struct_2_A8B98A73D524413D<::System::Type*> Method_1_BCC7B979B8769B7B(::System::Collections::Generic::KeyValuePair_2<::Struct_2_A8B98A73D524413D<::System::Type*>, ::Class_1_D45ADB5492AB938B*> a1)
	{
		return ((::Struct_2_A8B98A73D524413D<::System::Type*>(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::Struct_2_A8B98A73D524413D<::System::Type*>, ::Class_1_D45ADB5492AB938B*>))((::PBYTE)hIl2Cpp + CLASS_1_946637E2EE927FA0___C_METHOD_1_BCC7B979B8769B7B_OFFSET))(this, a1);
	}

	::Class_1_D45ADB5492AB938B* Method_1_56F4630BA244FFDB(::System::Collections::Generic::KeyValuePair_2<::Struct_2_A8B98A73D524413D<::System::Type*>, ::Class_1_D45ADB5492AB938B*> a1)
	{
		return ((::Class_1_D45ADB5492AB938B*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::Struct_2_A8B98A73D524413D<::System::Type*>, ::Class_1_D45ADB5492AB938B*>))((::PBYTE)hIl2Cpp + CLASS_1_946637E2EE927FA0___C_METHOD_1_56F4630BA244FFDB_OFFSET))(this, a1);
	}
};
