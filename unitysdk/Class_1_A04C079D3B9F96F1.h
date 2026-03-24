#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/MaterialPropertyType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigMaterialPropertyExclusivity; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_A04C079D3B9F96F1_METHOD_1_30B4D623BB7A748D_OFFSET UNITYSDK_OFFSET(0x6B48520)
#define CLASS_1_A04C079D3B9F96F1_METHOD_1_346D260AD27D5266_OFFSET UNITYSDK_OFFSET(0x6B48200)
#define CLASS_1_A04C079D3B9F96F1_METHOD_1_3A92946EBEAF48A5_OFFSET UNITYSDK_OFFSET(0x6B494D0)
#define CLASS_1_A04C079D3B9F96F1_METHOD_1_630B9B6F499F1666_OFFSET UNITYSDK_OFFSET(0x6B49BA0)
#define CLASS_1_A04C079D3B9F96F1_METHOD_1_69E0A7CF1F9215AB_OFFSET UNITYSDK_OFFSET(0x6B48A10)
#define CLASS_1_A04C079D3B9F96F1_METHOD_1_7ED701AA51C423B4_OFFSET UNITYSDK_OFFSET(0x6B48580)
#define CLASS_1_A04C079D3B9F96F1_METHOD_1_8E2C129DE4FC3609_OFFSET UNITYSDK_OFFSET(0x6B48340)
#define CLASS_1_A04C079D3B9F96F1_METHOD_1_9F6BF776D06FC1EB_OFFSET UNITYSDK_OFFSET(0x6B481A0)
#define CLASS_1_A04C079D3B9F96F1_METHOD_1_C7BF9C1E6A78DCAB_OFFSET UNITYSDK_OFFSET(0x6B49050)
#define CLASS_1_A04C079D3B9F96F1__CCTOR_OFFSET UNITYSDK_OFFSET(0x6B480D0)

inline static constexpr unsigned int Class_1_A04C079D3B9F96F1_TypeDefinitionIndex = 78643;

class Class_1_A04C079D3B9F96F1 : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigMaterialPropertyExclusivity** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigMaterialPropertyExclusivity**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A04C079D3B9F96F1_TypeDefinitionIndex)->GetStaticField(0x2F690);
	}
	static ::System::Collections::Generic::HashSet_1<::MoleMole::Config::MaterialPropertyType>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::HashSet_1<::MoleMole::Config::MaterialPropertyType>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A04C079D3B9F96F1_TypeDefinitionIndex)->GetStaticField(0x2F698);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A04C079D3B9F96F1__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_9F6BF776D06FC1EB(::MoleMole::Config::ConfigMaterialPropertyExclusivity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Config::ConfigMaterialPropertyExclusivity*))((::PBYTE)hIl2Cpp + CLASS_1_A04C079D3B9F96F1_METHOD_1_9F6BF776D06FC1EB_OFFSET))(a1);
	}

	static ::System::Void Method_1_346D260AD27D5266(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A04C079D3B9F96F1_METHOD_1_346D260AD27D5266_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::Config::ConfigMaterialPropertyExclusivity* Method_1_30B4D623BB7A748D()
	{
		return ((::MoleMole::Config::ConfigMaterialPropertyExclusivity*(*)())((::PBYTE)hIl2Cpp + CLASS_1_A04C079D3B9F96F1_METHOD_1_30B4D623BB7A748D_OFFSET))();
	}

	static ::System::Boolean Method_1_7ED701AA51C423B4(::MoleMole::Config::MaterialPropertyType a1, ::MoleMole::Config::MaterialPropertyType a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::MaterialPropertyType, ::MoleMole::Config::MaterialPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_A04C079D3B9F96F1_METHOD_1_7ED701AA51C423B4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_69E0A7CF1F9215AB(::MoleMole::Config::MaterialPropertyType a1, ::System::Collections::Generic::HashSet_1<::MoleMole::Config::MaterialPropertyType>* a2)
	{
		return ((::System::Void(*)(::MoleMole::Config::MaterialPropertyType, ::System::Collections::Generic::HashSet_1<::MoleMole::Config::MaterialPropertyType>*))((::PBYTE)hIl2Cpp + CLASS_1_A04C079D3B9F96F1_METHOD_1_69E0A7CF1F9215AB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C7BF9C1E6A78DCAB()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A04C079D3B9F96F1_METHOD_1_C7BF9C1E6A78DCAB_OFFSET))();
	}

	static ::System::Void Method_1_8E2C129DE4FC3609(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_A04C079D3B9F96F1_METHOD_1_8E2C129DE4FC3609_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3A92946EBEAF48A5(::MoleMole::Config::MaterialPropertyType a1, ::System::Collections::Generic::HashSet_1<::MoleMole::Config::MaterialPropertyType>* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::MoleMole::Config::MaterialPropertyType, ::System::Collections::Generic::HashSet_1<::MoleMole::Config::MaterialPropertyType>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A04C079D3B9F96F1_METHOD_1_3A92946EBEAF48A5_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_630B9B6F499F1666(::MoleMole::Config::MaterialPropertyType a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::MaterialPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_A04C079D3B9F96F1_METHOD_1_630B9B6F499F1666_OFFSET))(a1);
	}
};
