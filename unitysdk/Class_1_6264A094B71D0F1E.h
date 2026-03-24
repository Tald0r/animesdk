#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6264A094B71D0F1E_Enum_3_39495CFE7D69E36E.h"
#include "unitysdk/MoleMole/MiniGame/TartarusHounds/Direction.h"
#include "unitysdk/Struct_2_3A6816557F28A77F.h"
#include "unitysdk/System/Object.h"

class Class_1_2CDF619C23140440;
class Class_1_D5F08B6364839D11;
namespace MoleMole::MiniGame::TartarusHounds::View { class ViewEntityGame; }
namespace MoleMole::MiniGame::TartarusHounds::View { class ViewEntityPlayer; }
namespace System { class Random; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6264A094B71D0F1E_METHOD_1_0E47EF12DCDFA3DE_OFFSET UNITYSDK_OFFSET(0xF4581C0)
#define CLASS_1_6264A094B71D0F1E_METHOD_1_1F130271093617A5_OFFSET UNITYSDK_OFFSET(0xF458640)
#define CLASS_1_6264A094B71D0F1E_METHOD_1_26B9C5E62232D8AA_OFFSET UNITYSDK_OFFSET(0xF457610)
#define CLASS_1_6264A094B71D0F1E_METHOD_1_37CABF9BDC0BDED4_OFFSET UNITYSDK_OFFSET(0xF457690)
#define CLASS_1_6264A094B71D0F1E_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xF457C70)
#define CLASS_1_6264A094B71D0F1E_METHOD_1_479759059E440327_OFFSET UNITYSDK_OFFSET(0xF457F80)
#define CLASS_1_6264A094B71D0F1E_METHOD_1_6339B2181E930D1C_OFFSET UNITYSDK_OFFSET(0xF457590)
#define CLASS_1_6264A094B71D0F1E_METHOD_1_689FD2C6C25AAA58_OFFSET UNITYSDK_OFFSET(0xF4573A0)
#define CLASS_1_6264A094B71D0F1E_METHOD_1_7D86695104BF414D_OFFSET UNITYSDK_OFFSET(0xF457F00)
#define CLASS_1_6264A094B71D0F1E_METHOD_1_93767A75DB7EA256_OFFSET UNITYSDK_OFFSET(0xF457760)
#define CLASS_1_6264A094B71D0F1E_METHOD_1_A3419C783A95E7FD_OFFSET UNITYSDK_OFFSET(0xF4572C0)
#define CLASS_1_6264A094B71D0F1E_METHOD_1_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0xF4586B0)
#define CLASS_1_6264A094B71D0F1E_METHOD_1_A52062643A2DBAD8_OFFSET UNITYSDK_OFFSET(0xF457860)
#define CLASS_1_6264A094B71D0F1E_METHOD_1_AA95363987EB35F9_OFFSET UNITYSDK_OFFSET(0xF457A80)
#define CLASS_1_6264A094B71D0F1E_METHOD_1_AAD21DE195D05736_OFFSET UNITYSDK_OFFSET(0xF457E10)
#define CLASS_1_6264A094B71D0F1E_METHOD_1_E26C99C52BC1E654_OFFSET UNITYSDK_OFFSET(0xF458140)
#define CLASS_1_6264A094B71D0F1E_METHOD_1_E40597D120C37AE5_OFFSET UNITYSDK_OFFSET(0xF457E80)
#define CLASS_1_6264A094B71D0F1E__CTOR_OFFSET UNITYSDK_OFFSET(0xF4570D0)

inline static constexpr unsigned int Class_1_6264A094B71D0F1E_TypeDefinitionIndex = 73213;

class Class_1_6264A094B71D0F1E : public ::System::Object
{
public:
	::Class_1_2CDF619C23140440* Field_1_1; // 0x10
	::Class_1_D5F08B6364839D11* Field_1_0; // 0x18
	::MoleMole::MiniGame::TartarusHounds::View::ViewEntityPlayer* Field_1_3; // 0x20
	::System::Random* Field_1_6; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_5; // 0x30
	::MoleMole::MiniGame::TartarusHounds::View::ViewEntityGame* Field_1_2; // 0x38
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_4; // 0x40
	::System::Single Field_1_14; // 0x48
	::System::Single Field_1_8; // 0x4C
	::System::Single Field_1_15; // 0x50
	::System::Int32 Field_1_16; // 0x54
	::System::Int32 Field_1_17; // 0x58
	::System::Single Field_1_7; // 0x5C
	::MoleMole::MiniGame::TartarusHounds::Direction Field_1_11; // 0x60
	::Class_1_6264A094B71D0F1E_Enum_3_39495CFE7D69E36E Field_1_18; // 0x64
	::Class_1_6264A094B71D0F1E_Enum_3_39495CFE7D69E36E Field_1_9; // 0x68
	::System::Single Field_1_13; // 0x6C
	::System::Boolean Field_1_10; // 0x70
	::Struct_2_3A6816557F28A77F Field_1_12; // 0x74

	::System::Void _ctor(::System::UInt32 a1, ::Class_1_D5F08B6364839D11* a2, ::MoleMole::MiniGame::TartarusHounds::View::ViewEntityGame* a3, ::System::UInt32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_D5F08B6364839D11*, ::MoleMole::MiniGame::TartarusHounds::View::ViewEntityGame*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6264A094B71D0F1E__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_A3419C783A95E7FD(::MoleMole::MiniGame::TartarusHounds::Direction a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::MiniGame::TartarusHounds::Direction))((::PBYTE)hIl2Cpp + CLASS_1_6264A094B71D0F1E_METHOD_1_A3419C783A95E7FD_OFFSET))(this, a1);
	}

	::System::Void Method_1_6339B2181E930D1C(::MoleMole::MiniGame::TartarusHounds::Direction a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MiniGame::TartarusHounds::Direction))((::PBYTE)hIl2Cpp + CLASS_1_6264A094B71D0F1E_METHOD_1_6339B2181E930D1C_OFFSET))(this, a1);
	}

	::System::Tuple_2<::System::Int32, ::System::Int32>* Method_1_689FD2C6C25AAA58(::MoleMole::MiniGame::TartarusHounds::Direction a1)
	{
		return ((::System::Tuple_2<::System::Int32, ::System::Int32>*(*)(::PVOID, ::MoleMole::MiniGame::TartarusHounds::Direction))((::PBYTE)hIl2Cpp + CLASS_1_6264A094B71D0F1E_METHOD_1_689FD2C6C25AAA58_OFFSET))(this, a1);
	}

	::MoleMole::MiniGame::TartarusHounds::Direction Method_1_26B9C5E62232D8AA(::Class_1_6264A094B71D0F1E_Enum_3_39495CFE7D69E36E a1)
	{
		return ((::MoleMole::MiniGame::TartarusHounds::Direction(*)(::PVOID, ::Class_1_6264A094B71D0F1E_Enum_3_39495CFE7D69E36E))((::PBYTE)hIl2Cpp + CLASS_1_6264A094B71D0F1E_METHOD_1_26B9C5E62232D8AA_OFFSET))(this, a1);
	}

	::System::Single Method_1_37CABF9BDC0BDED4(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_6264A094B71D0F1E_METHOD_1_37CABF9BDC0BDED4_OFFSET))(this, a1);
	}

	::System::Void Method_1_93767A75DB7EA256(::MoleMole::MiniGame::TartarusHounds::Direction a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MiniGame::TartarusHounds::Direction))((::PBYTE)hIl2Cpp + CLASS_1_6264A094B71D0F1E_METHOD_1_93767A75DB7EA256_OFFSET))(this, a1);
	}

	::System::Void Method_1_A52062643A2DBAD8(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6264A094B71D0F1E_METHOD_1_A52062643A2DBAD8_OFFSET))(this, a1);
	}

	::System::Void Method_1_AAD21DE195D05736()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6264A094B71D0F1E_METHOD_1_AAD21DE195D05736_OFFSET))(this);
	}

	::System::Void Method_1_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6264A094B71D0F1E_METHOD_1_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Single Method_1_7D86695104BF414D()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6264A094B71D0F1E_METHOD_1_7D86695104BF414D_OFFSET))(this);
	}

	::System::Void Method_1_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6264A094B71D0F1E_METHOD_1_479759059E440327_OFFSET))(this, a1);
	}

	::System::Void Method_1_E40597D120C37AE5(::MoleMole::MiniGame::TartarusHounds::Direction a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MiniGame::TartarusHounds::Direction))((::PBYTE)hIl2Cpp + CLASS_1_6264A094B71D0F1E_METHOD_1_E40597D120C37AE5_OFFSET))(this, a1);
	}

	::System::Void Method_1_E26C99C52BC1E654()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6264A094B71D0F1E_METHOD_1_E26C99C52BC1E654_OFFSET))(this);
	}

	::System::Void Method_1_1F130271093617A5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6264A094B71D0F1E_METHOD_1_1F130271093617A5_OFFSET))(this);
	}

	::System::Boolean Method_1_AA95363987EB35F9(::MoleMole::MiniGame::TartarusHounds::Direction a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::MiniGame::TartarusHounds::Direction))((::PBYTE)hIl2Cpp + CLASS_1_6264A094B71D0F1E_METHOD_1_AA95363987EB35F9_OFFSET))(this, a1);
	}

	::System::Void Method_1_0E47EF12DCDFA3DE(::MoleMole::MiniGame::TartarusHounds::Direction a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MiniGame::TartarusHounds::Direction))((::PBYTE)hIl2Cpp + CLASS_1_6264A094B71D0F1E_METHOD_1_0E47EF12DCDFA3DE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6264A094B71D0F1E_METHOD_1_A3FAE12D7B6ACD62_OFFSET))(this);
	}
};
