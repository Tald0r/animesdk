#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_328B10E9F3553A0D.h"

namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }
namespace MoleMole::GalGame { class MainCityChatShowConfirmPopupNode; }

#define CLASS_2_3BCB6E927CE00793_METHOD_2_0C88AB06D46E777A_1_OFFSET UNITYSDK_OFFSET(0x9C44FA0)
#define CLASS_2_3BCB6E927CE00793_METHOD_2_0C88AB06D46E777A_OFFSET UNITYSDK_OFFSET(0x9C44EA0)
#define CLASS_2_3BCB6E927CE00793_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x9C44DC0)
#define CLASS_2_3BCB6E927CE00793_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x9C44A50)
#define CLASS_2_3BCB6E927CE00793_METHOD_2_A84CEAF7AFA573B3_OFFSET UNITYSDK_OFFSET(0x9C44AB0)
#define CLASS_2_3BCB6E927CE00793_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x9C44E40)
#define CLASS_2_3BCB6E927CE00793__CTOR_OFFSET UNITYSDK_OFFSET(0x9C449D0)

inline static constexpr unsigned int Class_2_3BCB6E927CE00793_TypeDefinitionIndex = 75194;

class Class_2_3BCB6E927CE00793 : public ::Class_1_328B10E9F3553A0D
{
public:
	::MoleMole::GalGame::MainCityChatShowConfirmPopupNode* Field_2_0; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + CLASS_2_3BCB6E927CE00793__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3BCB6E927CE00793_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_2_A84CEAF7AFA573B3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3BCB6E927CE00793_METHOD_2_A84CEAF7AFA573B3_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3BCB6E927CE00793_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3BCB6E927CE00793_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_0C88AB06D46E777A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3BCB6E927CE00793_METHOD_2_0C88AB06D46E777A_OFFSET))(this);
	}

	::System::Void Method_2_0C88AB06D46E777A_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3BCB6E927CE00793_METHOD_2_0C88AB06D46E777A_1_OFFSET))(this);
	}
};
