#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_175;
class Class_1_05CB482B8638F6BA;
class Class_1_70BD21BFA8AB64FC;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_17B5186D18D9F6F1_METHOD_1_A8D47294138355B7_OFFSET UNITYSDK_OFFSET(0x7EAE100)
#define CLASS_1_17B5186D18D9F6F1_METHOD_1_D9F1D9198BCC3B81_OFFSET UNITYSDK_OFFSET(0x7EAE8E0)
#define CLASS_1_17B5186D18D9F6F1_METHOD_1_E53CA7258B2BF183_OFFSET UNITYSDK_OFFSET(0x7EADFF0)
#define CLASS_1_17B5186D18D9F6F1_METHOD_1_FEA909EFF45FDE0B_OFFSET UNITYSDK_OFFSET(0x7EAE1E0)

inline static constexpr unsigned int Class_1_17B5186D18D9F6F1_TypeDefinitionIndex = 64616;

class Class_1_17B5186D18D9F6F1 : public ::System::Object
{
public:
	static ::MoleMole::HollowChessboard::RenderDataHandle Method_1_E53CA7258B2BF183(::Class_1_05CB482B8638F6BA* a1, ::MoleMole::HollowChessboard::HollowCell a2, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_175*>* a3)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::Class_1_05CB482B8638F6BA*, ::MoleMole::HollowChessboard::HollowCell, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_175*>*))((::PBYTE)hIl2Cpp + CLASS_1_17B5186D18D9F6F1_METHOD_1_E53CA7258B2BF183_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_A8D47294138355B7(::Class_1_05CB482B8638F6BA* a1, ::MoleMole::HollowChessboard::RenderDataHandle a2)
	{
		return ((::System::Void(*)(::Class_1_05CB482B8638F6BA*, ::MoleMole::HollowChessboard::RenderDataHandle))((::PBYTE)hIl2Cpp + CLASS_1_17B5186D18D9F6F1_METHOD_1_A8D47294138355B7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FEA909EFF45FDE0B(::Class_1_05CB482B8638F6BA* a1, ::MoleMole::HollowChessboard::HollowCell a2)
	{
		return ((::System::Void(*)(::Class_1_05CB482B8638F6BA*, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_17B5186D18D9F6F1_METHOD_1_FEA909EFF45FDE0B_OFFSET))(a1, a2);
	}

	static ::MoleMole::HollowChessboard::RenderDataHandle Method_1_D9F1D9198BCC3B81(::Class_1_05CB482B8638F6BA* a1, ::MoleMole::HollowChessboard::HollowCell a2, ::Il2CppArray<::Class_0_16E4307DCC419505_175*>* a3, ::Class_1_70BD21BFA8AB64FC* a4)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::Class_1_05CB482B8638F6BA*, ::MoleMole::HollowChessboard::HollowCell, ::Il2CppArray<::Class_0_16E4307DCC419505_175*>*, ::Class_1_70BD21BFA8AB64FC*))((::PBYTE)hIl2Cpp + CLASS_1_17B5186D18D9F6F1_METHOD_1_D9F1D9198BCC3B81_OFFSET))(a1, a2, a3, a4);
	}
};
