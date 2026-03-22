#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_96F6662CA3713095.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"

class Class_0_16E4307DCC419505_152;
class Class_3_793BFD6B897F5A49_1;
class Class_3_A9E2939AF1A43E78;
class Class_3_BE75AAF0F7C40C75;
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_4944F2B1D2E3C49E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x64306E0)
#define CLASS_2_4944F2B1D2E3C49E_METHOD_2_22714E188F870A67_OFFSET UNITYSDK_OFFSET(0x64309D0)
#define CLASS_2_4944F2B1D2E3C49E_METHOD_2_BFC2FEB384A5D04E_OFFSET UNITYSDK_OFFSET(0x6430BF0)
#define CLASS_2_4944F2B1D2E3C49E_ONCREATE_OFFSET UNITYSDK_OFFSET(0x6430460)
#define CLASS_2_4944F2B1D2E3C49E__CCTOR_OFFSET UNITYSDK_OFFSET(0x64309C0)
#define CLASS_2_4944F2B1D2E3C49E__CTOR_OFFSET UNITYSDK_OFFSET(0x64308B0)

inline static constexpr unsigned int Class_2_4944F2B1D2E3C49E_TypeDefinitionIndex = 62295;

class Class_2_4944F2B1D2E3C49E : public ::Foundation::SingletonDisposable_1<::Class_2_4944F2B1D2E3C49E*>
{
public:
	static ::System::Boolean* StaticGet_Field_2_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_4944F2B1D2E3C49E_TypeDefinitionIndex)->GetStaticField(0xDFF0);
	}
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_0_16E4307DCC419505_152*>* Field_2_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4944F2B1D2E3C49E__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_4944F2B1D2E3C49E__CCTOR_OFFSET))();
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4944F2B1D2E3C49E_ONCREATE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4944F2B1D2E3C49E_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_22714E188F870A67(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_4944F2B1D2E3C49E_METHOD_2_22714E188F870A67_OFFSET))(this, a1);
	}

	::System::Void Method_2_BFC2FEB384A5D04E(::System::Int32 a1, ::Enum_3_96F6662CA3713095 a2, ::Class_3_793BFD6B897F5A49_1* a3, ::Class_3_A9E2939AF1A43E78* a4, ::Class_3_BE75AAF0F7C40C75* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Enum_3_96F6662CA3713095, ::Class_3_793BFD6B897F5A49_1*, ::Class_3_A9E2939AF1A43E78*, ::Class_3_BE75AAF0F7C40C75*))((::PBYTE)hIl2Cpp + CLASS_2_4944F2B1D2E3C49E_METHOD_2_BFC2FEB384A5D04E_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};
