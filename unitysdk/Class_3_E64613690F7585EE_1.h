#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_BCA32DB678A03168.h"
#include "unitysdk/Enum_3_316FC8E376D95053.h"
#include "unitysdk/MoleMole/Config/ValueCompareType.h"

class Class_2_73836654F8931C75;
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_E64613690F7585EE_1_METHOD_3_755965B27CDB8C90_OFFSET UNITYSDK_OFFSET(0xC4A5730)
#define CLASS_3_E64613690F7585EE_1_METHOD_3_8C704EC832EDEFC8_OFFSET UNITYSDK_OFFSET(0xC4A5290)
#define CLASS_3_E64613690F7585EE_1_METHOD_3_C706B1EC6D2E1C64_OFFSET UNITYSDK_OFFSET(0xC4A5010)
#define CLASS_3_E64613690F7585EE_1_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xC4A59B0)
#define CLASS_3_E64613690F7585EE_1_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xC4A5950)
#define CLASS_3_E64613690F7585EE_1_METHOD_3_FA58824BA12F6F62_OFFSET UNITYSDK_OFFSET(0xC4A5570)
#define CLASS_3_E64613690F7585EE_1__CTOR_OFFSET UNITYSDK_OFFSET(0xC4A4DF0)

inline static constexpr unsigned int Class_3_E64613690F7585EE_1_TypeDefinitionIndex = 67253;

class Class_3_E64613690F7585EE_1 : public ::Class_2_BCA32DB678A03168
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* Field_3_0; // 0x38
	::Class_2_73836654F8931C75* Field_3_1; // 0x40
	::System::Single Field_3_2; // 0x48
	::MoleMole::Config::ValueCompareType Field_3_3; // 0x4C

	::System::Void _ctor(::System::Int32 a1, ::Enum_3_316FC8E376D95053 a2, ::System::Int32 a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Enum_3_316FC8E376D95053, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_E64613690F7585EE_1__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_C706B1EC6D2E1C64()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E64613690F7585EE_1_METHOD_3_C706B1EC6D2E1C64_OFFSET))(this);
	}

	::System::Void Method_3_FA58824BA12F6F62()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E64613690F7585EE_1_METHOD_3_FA58824BA12F6F62_OFFSET))(this);
	}

	::System::Void Method_3_8C704EC832EDEFC8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E64613690F7585EE_1_METHOD_3_8C704EC832EDEFC8_OFFSET))(this);
	}

	::System::Void Method_3_755965B27CDB8C90(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_E64613690F7585EE_1_METHOD_3_755965B27CDB8C90_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E64613690F7585EE_1_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E64613690F7585EE_1_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}
};
