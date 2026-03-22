#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_328B10E9F3553A0D.h"

class Class_1_BC9D27E6028F322B;
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }
namespace MoleMole::GalGame { class MainCityChatSyncServerDataConfig; }

#define CLASS_2_8A600B670BF2A453_METHOD_2_7FE7F893829399D7_OFFSET UNITYSDK_OFFSET(0xACA5880)
#define CLASS_2_8A600B670BF2A453_METHOD_2_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0xACA5750)
#define CLASS_2_8A600B670BF2A453_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xACA5820)
#define CLASS_2_8A600B670BF2A453__CTOR_OFFSET UNITYSDK_OFFSET(0xACA56D0)

inline static constexpr unsigned int Class_2_8A600B670BF2A453_TypeDefinitionIndex = 51229;

class Class_2_8A600B670BF2A453 : public ::Class_1_328B10E9F3553A0D
{
public:
	::MoleMole::GalGame::MainCityChatSyncServerDataConfig* Field_2_0; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + CLASS_2_8A600B670BF2A453__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8A600B670BF2A453_METHOD_2_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8A600B670BF2A453_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_7FE7F893829399D7(::Class_1_BC9D27E6028F322B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BC9D27E6028F322B*))((::PBYTE)hIl2Cpp + CLASS_2_8A600B670BF2A453_METHOD_2_7FE7F893829399D7_OFFSET))(this, a1);
	}
};
