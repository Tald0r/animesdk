#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_328B10E9F3553A0D.h"

namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }
namespace MoleMole::GalGame { class MainCityGraphNode; }

#define CLASS_2_F24FC829D23A8AA4_METHOD_2_85377D41FEE05B66_OFFSET UNITYSDK_OFFSET(0x63AC0E0)
#define CLASS_2_F24FC829D23A8AA4_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x63AC400)
#define CLASS_2_F24FC829D23A8AA4__CTOR_OFFSET UNITYSDK_OFFSET(0x63AC060)

inline static constexpr unsigned int Class_2_F24FC829D23A8AA4_TypeDefinitionIndex = 61157;

class Class_2_F24FC829D23A8AA4 : public ::Class_1_328B10E9F3553A0D
{
public:
	::MoleMole::GalGame::MainCityGraphNode* Field_2_0; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + CLASS_2_F24FC829D23A8AA4__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_85377D41FEE05B66()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F24FC829D23A8AA4_METHOD_2_85377D41FEE05B66_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F24FC829D23A8AA4_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
