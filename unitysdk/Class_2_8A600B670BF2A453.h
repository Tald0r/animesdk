#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_328B10E9F3553A0D.h"

class Class_1_B4B6517768F4059F;
class Class_1_BC9D27E6028F322B;
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }
namespace MoleMole::GalGame { class MainCityChatSyncServerDataConfig; }

#define CLASS_2_8A600B670BF2A453_METHOD_2_5022DB1DC5AA8CB4_OFFSET UNITYSDK_OFFSET(0x86E0B30)
#define CLASS_2_8A600B670BF2A453_METHOD_2_7FE7F893829399D7_OFFSET UNITYSDK_OFFSET(0x86E0C70)
#define CLASS_2_8A600B670BF2A453_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x86E0C00)
#define CLASS_2_8A600B670BF2A453__CTOR_OFFSET UNITYSDK_OFFSET(0x86E0AB0)

inline static constexpr unsigned int Class_2_8A600B670BF2A453_TypeDefinitionIndex = 78380;

class Class_2_8A600B670BF2A453 : public ::Class_1_328B10E9F3553A0D
{
public:
	::MoleMole::GalGame::MainCityChatSyncServerDataConfig* Field_2_0; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + CLASS_2_8A600B670BF2A453__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_5022DB1DC5AA8CB4(::Class_1_B4B6517768F4059F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4B6517768F4059F*))((::PBYTE)hIl2Cpp + CLASS_2_8A600B670BF2A453_METHOD_2_5022DB1DC5AA8CB4_OFFSET))(this, a1);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_B4B6517768F4059F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4B6517768F4059F*))((::PBYTE)hIl2Cpp + CLASS_2_8A600B670BF2A453_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_2_7FE7F893829399D7(::Class_1_BC9D27E6028F322B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BC9D27E6028F322B*))((::PBYTE)hIl2Cpp + CLASS_2_8A600B670BF2A453_METHOD_2_7FE7F893829399D7_OFFSET))(this, a1);
	}
};
