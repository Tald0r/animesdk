#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9FD5FAEBE7F92666_Struct_2_0D8C63B1CC32553A_1.h"
#include "unitysdk/Enum_3_3A8D4AF679CBDF1E.h"
#include "unitysdk/Enum_3_4125E22C5A7D75B1.h"
#include "unitysdk/Enum_3_4A483BC3F77616F6.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_2_4DD794443FE34DAB;
namespace MoleMole::MiniGame::TartarusHounds::View { class ViewEntityGame; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_9FD5FAEBE7F92666_METHOD_1_36E47868EF373D40_OFFSET UNITYSDK_OFFSET(0x884E360)
#define CLASS_1_9FD5FAEBE7F92666_METHOD_1_3D20FC38D98B7F9D_OFFSET UNITYSDK_OFFSET(0x884DFA0)
#define CLASS_1_9FD5FAEBE7F92666_METHOD_1_6F73A40265D5B980_OFFSET UNITYSDK_OFFSET(0x884D4E0)
#define CLASS_1_9FD5FAEBE7F92666_METHOD_1_8DCF15AB7598259E_OFFSET UNITYSDK_OFFSET(0x884D180)
#define CLASS_1_9FD5FAEBE7F92666_METHOD_1_921413D026C81EF5_OFFSET UNITYSDK_OFFSET(0x884D720)
#define CLASS_1_9FD5FAEBE7F92666_METHOD_1_9B8206603CE8CF13_OFFSET UNITYSDK_OFFSET(0x884DD90)
#define CLASS_1_9FD5FAEBE7F92666_METHOD_1_A770FD390A9DDF16_OFFSET UNITYSDK_OFFSET(0x884D930)
#define CLASS_1_9FD5FAEBE7F92666_METHOD_1_C401240752BDEFA5_OFFSET UNITYSDK_OFFSET(0x884E120)
#define CLASS_1_9FD5FAEBE7F92666_METHOD_1_E484621534821291_OFFSET UNITYSDK_OFFSET(0x884D3A0)
#define CLASS_1_9FD5FAEBE7F92666_METHOD_1_E6168D64FA75612E_OFFSET UNITYSDK_OFFSET(0x884E240)
#define CLASS_1_9FD5FAEBE7F92666__CTOR_1_OFFSET UNITYSDK_OFFSET(0x884D100)
#define CLASS_1_9FD5FAEBE7F92666__CTOR_OFFSET UNITYSDK_OFFSET(0x884D070)

inline static constexpr unsigned int Class_1_9FD5FAEBE7F92666_TypeDefinitionIndex = 61638;

class Class_1_9FD5FAEBE7F92666 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_3 = 0x1E; // 0x0
	::MoleMole::MiniGame::TartarusHounds::View::ViewEntityGame* Field_1_2; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_9FD5FAEBE7F92666_Struct_2_0D8C63B1CC32553A_1>* Field_1_0; // 0x18
	::System::Collections::Generic::HashSet_1<::System::ValueTuple_3<::System::UInt32, ::System::UInt32, ::System::UInt32>>* Field_1_1; // 0x20
	::System::Collections::Generic::Queue_1<::Class_2_4DD794443FE34DAB*>* Field_1_7; // 0x28
	::System::Single Field_1_5; // 0x30
	::System::Single Field_1_6; // 0x34
	::System::Single Field_1_4; // 0x38

	::System::Void _ctor(::MoleMole::MiniGame::TartarusHounds::View::ViewEntityGame* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MiniGame::TartarusHounds::View::ViewEntityGame*))((::PBYTE)hIl2Cpp + CLASS_1_9FD5FAEBE7F92666__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9FD5FAEBE7F92666__CTOR_1_OFFSET))(this);
	}

	::System::Void Method_1_8DCF15AB7598259E(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9FD5FAEBE7F92666_METHOD_1_8DCF15AB7598259E_OFFSET))(this, a1);
	}

	static ::System::Void Method_1_E484621534821291(::Class_1_9FD5FAEBE7F92666* a1)
	{
		return ((::System::Void(*)(::Class_1_9FD5FAEBE7F92666*))((::PBYTE)hIl2Cpp + CLASS_1_9FD5FAEBE7F92666_METHOD_1_E484621534821291_OFFSET))(a1);
	}

	::System::Void Method_1_6F73A40265D5B980()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9FD5FAEBE7F92666_METHOD_1_6F73A40265D5B980_OFFSET))(this);
	}

	::System::Void Method_1_921413D026C81EF5(::Class_1_9FD5FAEBE7F92666_Struct_2_0D8C63B1CC32553A_1 a1, ::Enum_3_4A483BC3F77616F6 a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9FD5FAEBE7F92666_Struct_2_0D8C63B1CC32553A_1, ::Enum_3_4A483BC3F77616F6, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_9FD5FAEBE7F92666_METHOD_1_921413D026C81EF5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_A770FD390A9DDF16(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::Enum_3_3A8D4AF679CBDF1E a4, ::Enum_3_4125E22C5A7D75B1 a5, ::System::Int32 a6, ::System::Boolean a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::Enum_3_3A8D4AF679CBDF1E, ::Enum_3_4125E22C5A7D75B1, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9FD5FAEBE7F92666_METHOD_1_A770FD390A9DDF16_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_1_9B8206603CE8CF13(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9FD5FAEBE7F92666_METHOD_1_9B8206603CE8CF13_OFFSET))(this, a1);
	}

	::System::Void Method_1_3D20FC38D98B7F9D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9FD5FAEBE7F92666_METHOD_1_3D20FC38D98B7F9D_OFFSET))(this, a1);
	}

	::System::Void Method_1_C401240752BDEFA5(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9FD5FAEBE7F92666_METHOD_1_C401240752BDEFA5_OFFSET))(this, a1, a2, a3);
	}

	static ::Class_1_9FD5FAEBE7F92666* Method_1_E6168D64FA75612E(::MoleMole::MiniGame::TartarusHounds::View::ViewEntityGame* a1)
	{
		return ((::Class_1_9FD5FAEBE7F92666*(*)(::MoleMole::MiniGame::TartarusHounds::View::ViewEntityGame*))((::PBYTE)hIl2Cpp + CLASS_1_9FD5FAEBE7F92666_METHOD_1_E6168D64FA75612E_OFFSET))(a1);
	}

	::System::Void Method_1_36E47868EF373D40(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9FD5FAEBE7F92666_METHOD_1_36E47868EF373D40_OFFSET))(this, a1);
	}
};
