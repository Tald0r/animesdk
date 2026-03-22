#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/MoleMole/HollowChessboard/EffectResult.h"
#include "unitysdk/Struct_2_C70A12CE5BBC6553.h"
#include "unitysdk/System/Object.h"

class Class_1_18B5C63655A4A803;
class Class_1_562E27B325F76EB9_Class_1_EC905AE436B97AD0;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_DD6534260D7F9B1A_METHOD_1_0D20AC2760D59C01_OFFSET UNITYSDK_OFFSET(0x7CFC5F0)
#define CLASS_1_DD6534260D7F9B1A_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x7CFC600)
#define CLASS_1_DD6534260D7F9B1A_METHOD_1_528BD4865C714C5C_OFFSET UNITYSDK_OFFSET(0x7CFC670)
#define CLASS_1_DD6534260D7F9B1A_METHOD_1_54C670076A409A2B_OFFSET UNITYSDK_OFFSET(0x7CFC720)
#define CLASS_1_DD6534260D7F9B1A_METHOD_1_9E972577C5305966_OFFSET UNITYSDK_OFFSET(0x7CFC6B0)
#define CLASS_1_DD6534260D7F9B1A_METHOD_1_AEA769B4E1573E8E_OFFSET UNITYSDK_OFFSET(0x7CFC940)
#define CLASS_1_DD6534260D7F9B1A_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x7CFC930)
#define CLASS_1_DD6534260D7F9B1A__CTOR_OFFSET UNITYSDK_OFFSET(0x7CFC5E0)

inline static constexpr unsigned int Class_1_DD6534260D7F9B1A_TypeDefinitionIndex = 76461;

class Class_1_DD6534260D7F9B1A : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_18B5C63655A4A803*>* Field_1_1; // 0x10
	::System::Boolean Field_1_2; // 0x18
	::Foundation::Unreal::FGameplayTag Field_1_0; // 0x1C

	::System::Void _ctor(::System::Collections::Generic::List_1<::Class_1_18B5C63655A4A803*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_18B5C63655A4A803*>*))((::PBYTE)hIl2Cpp + CLASS_1_DD6534260D7F9B1A__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_0D20AC2760D59C01(::Foundation::Unreal::FGameplayTag a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + CLASS_1_DD6534260D7F9B1A_METHOD_1_0D20AC2760D59C01_OFFSET))(this, a1);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DD6534260D7F9B1A_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	static ::Class_1_DD6534260D7F9B1A* Method_1_528BD4865C714C5C()
	{
		return ((::Class_1_DD6534260D7F9B1A*(*)())((::PBYTE)hIl2Cpp + CLASS_1_DD6534260D7F9B1A_METHOD_1_528BD4865C714C5C_OFFSET))();
	}

	::System::Void Method_1_9E972577C5305966(::Foundation::Unreal::FGameplayTag a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + CLASS_1_DD6534260D7F9B1A_METHOD_1_9E972577C5305966_OFFSET))(this, a1);
	}

	::MoleMole::HollowChessboard::EffectResult Method_1_54C670076A409A2B(::Struct_2_C70A12CE5BBC6553& a1, ::Struct_2_C70A12CE5BBC6553& a2, ::Class_1_562E27B325F76EB9_Class_1_EC905AE436B97AD0* a3)
	{
		return ((::MoleMole::HollowChessboard::EffectResult(*)(::PVOID, ::Struct_2_C70A12CE5BBC6553&, ::Struct_2_C70A12CE5BBC6553&, ::Class_1_562E27B325F76EB9_Class_1_EC905AE436B97AD0*))((::PBYTE)hIl2Cpp + CLASS_1_DD6534260D7F9B1A_METHOD_1_54C670076A409A2B_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD6534260D7F9B1A_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::Foundation::Unreal::FGameplayTag Method_1_AEA769B4E1573E8E()
	{
		return ((::Foundation::Unreal::FGameplayTag(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD6534260D7F9B1A_METHOD_1_AEA769B4E1573E8E_OFFSET))(this);
	}
};
