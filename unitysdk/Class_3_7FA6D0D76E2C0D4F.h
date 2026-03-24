#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_BCA32DB678A03168.h"
#include "unitysdk/Enum_3_316FC8E376D95053.h"
#include "unitysdk/MoleMole/Config/ValueCompareType.h"

class Class_2_73836654F8931C75;
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_7FA6D0D76E2C0D4F_METHOD_3_5E9294C99F0DEA25_OFFSET UNITYSDK_OFFSET(0xCBED9C0)
#define CLASS_3_7FA6D0D76E2C0D4F_METHOD_3_A40475C44AA8CEAB_OFFSET UNITYSDK_OFFSET(0xCBED6B0)
#define CLASS_3_7FA6D0D76E2C0D4F_METHOD_3_AC7CD4175E0A3EF8_OFFSET UNITYSDK_OFFSET(0xCBED360)
#define CLASS_3_7FA6D0D76E2C0D4F_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xCBEDCD0)
#define CLASS_3_7FA6D0D76E2C0D4F_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xCBED960)
#define CLASS_3_7FA6D0D76E2C0D4F__CTOR_OFFSET UNITYSDK_OFFSET(0xCBED250)

inline static constexpr unsigned int Class_3_7FA6D0D76E2C0D4F_TypeDefinitionIndex = 66273;

class Class_3_7FA6D0D76E2C0D4F : public ::Class_2_BCA32DB678A03168
{
public:
	::Class_2_73836654F8931C75* Field_3_1; // 0x38
	::MoleMole::Config::ValueCompareType Field_3_0; // 0x40

	::System::Void _ctor(::System::Int32 a1, ::Enum_3_316FC8E376D95053 a2, ::System::Int32 a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Enum_3_316FC8E376D95053, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_7FA6D0D76E2C0D4F__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_AC7CD4175E0A3EF8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7FA6D0D76E2C0D4F_METHOD_3_AC7CD4175E0A3EF8_OFFSET))(this);
	}

	::System::Void Method_3_A40475C44AA8CEAB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7FA6D0D76E2C0D4F_METHOD_3_A40475C44AA8CEAB_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7FA6D0D76E2C0D4F_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_5E9294C99F0DEA25(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_7FA6D0D76E2C0D4F_METHOD_3_5E9294C99F0DEA25_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7FA6D0D76E2C0D4F_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}
};
