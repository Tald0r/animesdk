#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DF9D0F5061CCF34_Struct_2_53FD362C258A5DD7.h"
#include "unitysdk/Class_3_BC82EF9085BE2056.h"
#include "unitysdk/Class_4_7162AE539CEC5D38_Struct_2_64FE122F26515195.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"

class Class_1_0AEBFEBDADDA07AC;
class Class_1_E9281D5A4F23927F;
class Class_4_7B5A65E248106C68;
class Class_5_8A5B236F53009830;
class Class_5_AF65C3A968E836D2;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace Nap::NapECS { class EcsComponent; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_4_7162AE539CEC5D38_METHOD_4_0FBA4B6591A28488_OFFSET UNITYSDK_OFFSET(0x662B2C0)
#define CLASS_4_7162AE539CEC5D38_METHOD_4_1C4D40BA004C8881_OFFSET UNITYSDK_OFFSET(0x662B0D0)
#define CLASS_4_7162AE539CEC5D38_METHOD_4_3D4C7DD85189C1A5_OFFSET UNITYSDK_OFFSET(0x662B000)
#define CLASS_4_7162AE539CEC5D38_METHOD_4_4B944CD2BEF58AE1_OFFSET UNITYSDK_OFFSET(0x6629E60)
#define CLASS_4_7162AE539CEC5D38_METHOD_4_58BA46D4FD7124A2_OFFSET UNITYSDK_OFFSET(0x662B6F0)
#define CLASS_4_7162AE539CEC5D38_METHOD_4_636BBB67F7BA963D_OFFSET UNITYSDK_OFFSET(0x6628FD0)
#define CLASS_4_7162AE539CEC5D38_METHOD_4_73590D0F783B1C6A_OFFSET UNITYSDK_OFFSET(0x6629110)
#define CLASS_4_7162AE539CEC5D38_METHOD_4_81A66FB988DFA6AA_OFFSET UNITYSDK_OFFSET(0x662A430)
#define CLASS_4_7162AE539CEC5D38_METHOD_4_85D2193A89F3DD55_OFFSET UNITYSDK_OFFSET(0x662A1A0)
#define CLASS_4_7162AE539CEC5D38_METHOD_4_970E2E8CDB07A092_OFFSET UNITYSDK_OFFSET(0x662A890)
#define CLASS_4_7162AE539CEC5D38_METHOD_4_9CF17954DD8A4D2D_OFFSET UNITYSDK_OFFSET(0x66292A0)
#define CLASS_4_7162AE539CEC5D38_METHOD_4_BC943845AD1B0A68_OFFSET UNITYSDK_OFFSET(0x662AD80)
#define CLASS_4_7162AE539CEC5D38_METHOD_4_CB39C90CE6596DB8_OFFSET UNITYSDK_OFFSET(0x66297A0)
#define CLASS_4_7162AE539CEC5D38_METHOD_4_D279183863085EC4_OFFSET UNITYSDK_OFFSET(0x6629D30)
#define CLASS_4_7162AE539CEC5D38_METHOD_4_FB359C5E311AC079_OFFSET UNITYSDK_OFFSET(0x6628F20)
#define CLASS_4_7162AE539CEC5D38__CTOR_OFFSET UNITYSDK_OFFSET(0x6628F80)

inline static constexpr unsigned int Class_4_7162AE539CEC5D38_TypeDefinitionIndex = 66368;

class Class_4_7162AE539CEC5D38 : public ::Class_3_BC82EF9085BE2056
{
public:
	::Class_1_E9281D5A4F23927F* Field_4_1; // 0x10
	::Class_1_E9281D5A4F23927F* Field_4_0; // 0x18
	::Class_1_E9281D5A4F23927F* Field_4_2; // 0x20
	::System::Boolean Field_4_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7162AE539CEC5D38__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* Method_4_FB359C5E311AC079()
	{
		return ((::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7162AE539CEC5D38_METHOD_4_FB359C5E311AC079_OFFSET))(this);
	}

	static ::System::Void Method_4_636BBB67F7BA963D(::MoleMole::HollowChessboard::HollowEntity* a1, ::Class_5_8A5B236F53009830* a2)
	{
		return ((::System::Void(*)(::MoleMole::HollowChessboard::HollowEntity*, ::Class_5_8A5B236F53009830*))((::PBYTE)hIl2Cpp + CLASS_4_7162AE539CEC5D38_METHOD_4_636BBB67F7BA963D_OFFSET))(a1, a2);
	}

	static ::Class_5_8A5B236F53009830* Method_4_73590D0F783B1C6A(::Class_1_5DF9D0F5061CCF34_Struct_2_53FD362C258A5DD7& a1, ::Class_4_7162AE539CEC5D38_Struct_2_64FE122F26515195 a2, ::Class_4_7B5A65E248106C68* a3)
	{
		return ((::Class_5_8A5B236F53009830*(*)(::Class_1_5DF9D0F5061CCF34_Struct_2_53FD362C258A5DD7&, ::Class_4_7162AE539CEC5D38_Struct_2_64FE122F26515195, ::Class_4_7B5A65E248106C68*))((::PBYTE)hIl2Cpp + CLASS_4_7162AE539CEC5D38_METHOD_4_73590D0F783B1C6A_OFFSET))(a1, a2, a3);
	}

	::MoleMole::HollowChessboard::HollowEntity* Method_4_CB39C90CE6596DB8(::Class_4_7162AE539CEC5D38_Struct_2_64FE122F26515195 a1)
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID, ::Class_4_7162AE539CEC5D38_Struct_2_64FE122F26515195))((::PBYTE)hIl2Cpp + CLASS_4_7162AE539CEC5D38_METHOD_4_CB39C90CE6596DB8_OFFSET))(this, a1);
	}

	static ::Class_4_7162AE539CEC5D38* Method_4_D279183863085EC4()
	{
		return ((::Class_4_7162AE539CEC5D38*(*)())((::PBYTE)hIl2Cpp + CLASS_4_7162AE539CEC5D38_METHOD_4_D279183863085EC4_OFFSET))();
	}

	::System::Void Method_4_4B944CD2BEF58AE1(::MoleMole::HollowChessboard::HollowEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + CLASS_4_7162AE539CEC5D38_METHOD_4_4B944CD2BEF58AE1_OFFSET))(this, a1);
	}

	::System::Void Method_4_85D2193A89F3DD55(::MoleMole::HollowChessboard::HollowEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + CLASS_4_7162AE539CEC5D38_METHOD_4_85D2193A89F3DD55_OFFSET))(this, a1);
	}

	::System::Void Method_4_81A66FB988DFA6AA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7162AE539CEC5D38_METHOD_4_81A66FB988DFA6AA_OFFSET))(this);
	}

	static ::System::Boolean Method_4_9CF17954DD8A4D2D(::Class_4_7162AE539CEC5D38_Struct_2_64FE122F26515195 a1, ::Class_5_8A5B236F53009830* a2, ::Class_4_7B5A65E248106C68* a3)
	{
		return ((::System::Boolean(*)(::Class_4_7162AE539CEC5D38_Struct_2_64FE122F26515195, ::Class_5_8A5B236F53009830*, ::Class_4_7B5A65E248106C68*))((::PBYTE)hIl2Cpp + CLASS_4_7162AE539CEC5D38_METHOD_4_9CF17954DD8A4D2D_OFFSET))(a1, a2, a3);
	}

	::System::Boolean Method_4_970E2E8CDB07A092(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_4_7162AE539CEC5D38_METHOD_4_970E2E8CDB07A092_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_4_BC943845AD1B0A68(::Class_5_AF65C3A968E836D2* a1, ::MoleMole::HollowChessboard::HollowCell a2)
	{
		return ((::System::Boolean(*)(::Class_5_AF65C3A968E836D2*, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_4_7162AE539CEC5D38_METHOD_4_BC943845AD1B0A68_OFFSET))(a1, a2);
	}

	::System::Void Method_4_3D4C7DD85189C1A5(::Class_5_AF65C3A968E836D2* a1, ::MoleMole::HollowChessboard::HollowCell a2, ::Class_1_0AEBFEBDADDA07AC* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_AF65C3A968E836D2*, ::MoleMole::HollowChessboard::HollowCell, ::Class_1_0AEBFEBDADDA07AC*))((::PBYTE)hIl2Cpp + CLASS_4_7162AE539CEC5D38_METHOD_4_3D4C7DD85189C1A5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_1C4D40BA004C8881(::Class_5_AF65C3A968E836D2* a1, ::MoleMole::HollowChessboard::HollowCell a2, ::Class_1_0AEBFEBDADDA07AC* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_AF65C3A968E836D2*, ::MoleMole::HollowChessboard::HollowCell, ::Class_1_0AEBFEBDADDA07AC*))((::PBYTE)hIl2Cpp + CLASS_4_7162AE539CEC5D38_METHOD_4_1C4D40BA004C8881_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_4_0FBA4B6591A28488(::Class_5_AF65C3A968E836D2* a1, ::MoleMole::HollowChessboard::HollowCell a2, ::Class_1_0AEBFEBDADDA07AC* a3, ::Class_4_7162AE539CEC5D38_Struct_2_64FE122F26515195& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_5_AF65C3A968E836D2*, ::MoleMole::HollowChessboard::HollowCell, ::Class_1_0AEBFEBDADDA07AC*, ::Class_4_7162AE539CEC5D38_Struct_2_64FE122F26515195&))((::PBYTE)hIl2Cpp + CLASS_4_7162AE539CEC5D38_METHOD_4_0FBA4B6591A28488_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_4_58BA46D4FD7124A2(::MoleMole::HollowChessboard::HollowChessboardUID a1, ::MoleMole::HollowChessboard::HollowCell a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_4_7162AE539CEC5D38_METHOD_4_58BA46D4FD7124A2_OFFSET))(this, a1, a2);
	}
};
