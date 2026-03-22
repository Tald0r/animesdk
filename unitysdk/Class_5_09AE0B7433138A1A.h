#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_86126C0ABC4F0231.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"

class Class_1_F50B5EAC0B6702FB;
class Class_2_9DCE2FC33F67E8A2;
namespace MoleMole { class UIHollowMainPageController; }
namespace MoleMole::Config { class ConfigChessboardElevatorDownSplash; }
namespace MoleMole::Config { class UISpecialNumGroup; }

#define CLASS_5_09AE0B7433138A1A_METHOD_5_1E13A8A5C0FF7D62_OFFSET UNITYSDK_OFFSET(0x62FD750)
#define CLASS_5_09AE0B7433138A1A_METHOD_5_4BE9D9EFA5982319_OFFSET UNITYSDK_OFFSET(0x62FD6B0)
#define CLASS_5_09AE0B7433138A1A_METHOD_5_6A0EBEECA245A27C_OFFSET UNITYSDK_OFFSET(0x62FDAA0)
#define CLASS_5_09AE0B7433138A1A_METHOD_5_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x62FDC60)
#define CLASS_5_09AE0B7433138A1A_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x62FDBF0)
#define CLASS_5_09AE0B7433138A1A__CTOR_OFFSET UNITYSDK_OFFSET(0x62FDB90)

inline static constexpr unsigned int Class_5_09AE0B7433138A1A_TypeDefinitionIndex = 41392;

class Class_5_09AE0B7433138A1A : public ::Class_4_86126C0ABC4F0231<::MoleMole::Config::ConfigChessboardElevatorDownSplash*>
{
public:
	::MoleMole::UIHollowMainPageController* Field_5_2; // 0x40
	::MoleMole::Config::ConfigChessboardElevatorDownSplash* Field_5_1; // 0x48
	::Foundation::Coroutine::CoroutineHandle Field_5_0; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_09AE0B7433138A1A__CTOR_OFFSET))(this);
	}

	::System::Void Method_5_4BE9D9EFA5982319(::MoleMole::Config::ConfigChessboardElevatorDownSplash* a1, ::Class_2_9DCE2FC33F67E8A2* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_F50B5EAC0B6702FB* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigChessboardElevatorDownSplash*, ::Class_2_9DCE2FC33F67E8A2*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_F50B5EAC0B6702FB*))((::PBYTE)hIl2Cpp + CLASS_5_09AE0B7433138A1A_METHOD_5_4BE9D9EFA5982319_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_5_1E13A8A5C0FF7D62()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_09AE0B7433138A1A_METHOD_5_1E13A8A5C0FF7D62_OFFSET))(this);
	}

	::System::Void Method_5_6A0EBEECA245A27C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_09AE0B7433138A1A_METHOD_5_6A0EBEECA245A27C_OFFSET))(this);
	}

	::System::Void Method_5_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_09AE0B7433138A1A_METHOD_5_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_5_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_09AE0B7433138A1A_METHOD_5_CA373AA1C7054598_1_OFFSET))(this);
	}
};
