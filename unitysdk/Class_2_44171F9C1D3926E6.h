#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9166BD0F741825C9_Class_1_80B72DC469819FF0_Enum_3_5EAAA44F0B7913FD.h"
#include "unitysdk/Class_2_44171F9C1D3926E6_Enum_3_3F20ED26C9C3A6B5.h"
#include "unitysdk/Class_2_44171F9C1D3926E6_Enum_3_4B12E5689253D79F.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/FocusUISpecialIconParam.h"

class Class_1_B7E341C5F1A6F199;
class Class_2_44171F9C1D3926E6_Class_1_12F0ACC7AF0C2598;
class Class_3_D92ADC48CDFCC09B_1;
namespace MoleMole::Battle { class Entity; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_44171F9C1D3926E6_DISPOSE_OFFSET UNITYSDK_OFFSET(0x81AC5F0)
#define CLASS_2_44171F9C1D3926E6_METHOD_2_0A7C75AE549C5CCF_OFFSET UNITYSDK_OFFSET(0x81AD8B0)
#define CLASS_2_44171F9C1D3926E6_METHOD_2_1AF0EFB40F7AF822_OFFSET UNITYSDK_OFFSET(0x81ADA80)
#define CLASS_2_44171F9C1D3926E6_METHOD_2_3EF78293AE73C881_OFFSET UNITYSDK_OFFSET(0x81ADBB0)
#define CLASS_2_44171F9C1D3926E6_METHOD_2_628DF4475D0AD24B_OFFSET UNITYSDK_OFFSET(0x81AE680)
#define CLASS_2_44171F9C1D3926E6_METHOD_2_6C5219D256048011_OFFSET UNITYSDK_OFFSET(0x81ADD10)
#define CLASS_2_44171F9C1D3926E6_METHOD_2_6DDE9E07E2ABBFE8_OFFSET UNITYSDK_OFFSET(0x81AE4D0)
#define CLASS_2_44171F9C1D3926E6_METHOD_2_A64902DA4259B16D_1_OFFSET UNITYSDK_OFFSET(0x81ADD90)
#define CLASS_2_44171F9C1D3926E6_METHOD_2_A64902DA4259B16D_OFFSET UNITYSDK_OFFSET(0x81ACFA0)
#define CLASS_2_44171F9C1D3926E6_METHOD_2_E7D4C9DD53B2EA37_OFFSET UNITYSDK_OFFSET(0x81AE080)
#define CLASS_2_44171F9C1D3926E6_METHOD_2_F0037AD495309D81_OFFSET UNITYSDK_OFFSET(0x81ADEC0)
#define CLASS_2_44171F9C1D3926E6_METHOD_2_F17FCC9AE79D7256_OFFSET UNITYSDK_OFFSET(0x81AD0D0)
#define CLASS_2_44171F9C1D3926E6_ONCREATE_OFFSET UNITYSDK_OFFSET(0x81ACA80)
#define CLASS_2_44171F9C1D3926E6__CTOR_OFFSET UNITYSDK_OFFSET(0x81ACF10)

inline static constexpr unsigned int Class_2_44171F9C1D3926E6_TypeDefinitionIndex = 50552;

class Class_2_44171F9C1D3926E6 : public ::Foundation::SingletonDisposable_1<::Class_2_44171F9C1D3926E6*>
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_44171F9C1D3926E6_Class_1_12F0ACC7AF0C2598*>* Field_2_0; // 0x10
	::System::Boolean Field_2_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44171F9C1D3926E6__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44171F9C1D3926E6_DISPOSE_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44171F9C1D3926E6_ONCREATE_OFFSET))(this);
	}

	::System::Void Method_2_A64902DA4259B16D(::System::UInt32 a1, ::Class_2_44171F9C1D3926E6_Enum_3_3F20ED26C9C3A6B5 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_2_44171F9C1D3926E6_Enum_3_3F20ED26C9C3A6B5))((::PBYTE)hIl2Cpp + CLASS_2_44171F9C1D3926E6_METHOD_2_A64902DA4259B16D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F17FCC9AE79D7256(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_44171F9C1D3926E6_METHOD_2_F17FCC9AE79D7256_OFFSET))(this, a1);
	}

	::System::Void Method_2_0A7C75AE549C5CCF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44171F9C1D3926E6_METHOD_2_0A7C75AE549C5CCF_OFFSET))(this);
	}

	::System::Void Method_2_1AF0EFB40F7AF822(::System::UInt32 a1, ::Class_2_44171F9C1D3926E6_Enum_3_4B12E5689253D79F a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_2_44171F9C1D3926E6_Enum_3_4B12E5689253D79F))((::PBYTE)hIl2Cpp + CLASS_2_44171F9C1D3926E6_METHOD_2_1AF0EFB40F7AF822_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3EF78293AE73C881(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_44171F9C1D3926E6_METHOD_2_3EF78293AE73C881_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_6C5219D256048011(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_44171F9C1D3926E6_METHOD_2_6C5219D256048011_OFFSET))(this, a1);
	}

	::System::Void Method_2_A64902DA4259B16D_1(::System::UInt32 a1, ::Class_2_44171F9C1D3926E6_Enum_3_4B12E5689253D79F a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_2_44171F9C1D3926E6_Enum_3_4B12E5689253D79F))((::PBYTE)hIl2Cpp + CLASS_2_44171F9C1D3926E6_METHOD_2_A64902DA4259B16D_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F0037AD495309D81(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_44171F9C1D3926E6_METHOD_2_F0037AD495309D81_OFFSET))(this, a1);
	}

	::System::Void Method_2_E7D4C9DD53B2EA37(::System::UInt32 a1, ::Class_2_44171F9C1D3926E6_Enum_3_3F20ED26C9C3A6B5 a2, ::System::String* a3, ::Foundation::AssetPath a4, ::MoleMole::FlowCanvas::Nodes::FocusUISpecialIconParam a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_2_44171F9C1D3926E6_Enum_3_3F20ED26C9C3A6B5, ::System::String*, ::Foundation::AssetPath, ::MoleMole::FlowCanvas::Nodes::FocusUISpecialIconParam))((::PBYTE)hIl2Cpp + CLASS_2_44171F9C1D3926E6_METHOD_2_E7D4C9DD53B2EA37_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_6DDE9E07E2ABBFE8(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_44171F9C1D3926E6_METHOD_2_6DDE9E07E2ABBFE8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_628DF4475D0AD24B(::System::UInt32 a1, ::Class_2_44171F9C1D3926E6_Enum_3_4B12E5689253D79F a2, ::System::String* a3, ::System::Boolean a4, ::System::Boolean a5, ::Class_1_9166BD0F741825C9_Class_1_80B72DC469819FF0_Enum_3_5EAAA44F0B7913FD a6, ::Class_3_D92ADC48CDFCC09B_1* a7, ::System::Boolean a8)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_2_44171F9C1D3926E6_Enum_3_4B12E5689253D79F, ::System::String*, ::System::Boolean, ::System::Boolean, ::Class_1_9166BD0F741825C9_Class_1_80B72DC469819FF0_Enum_3_5EAAA44F0B7913FD, ::Class_3_D92ADC48CDFCC09B_1*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_44171F9C1D3926E6_METHOD_2_628DF4475D0AD24B_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}
};
