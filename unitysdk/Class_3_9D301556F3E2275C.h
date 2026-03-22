#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_455124A410922D9D.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"

namespace MoleMole::HollowChessboard { class ParticleSection; }

#define CLASS_3_9D301556F3E2275C_METHOD_3_B1936CE4DA97AA45_1_OFFSET UNITYSDK_OFFSET(0x5FAF7D0)
#define CLASS_3_9D301556F3E2275C_METHOD_3_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x5FAF310)
#define CLASS_3_9D301556F3E2275C_METHOD_3_D87A7D8243E04FD7_OFFSET UNITYSDK_OFFSET(0x5FAEFF0)
#define CLASS_3_9D301556F3E2275C_METHOD_3_DEB7D04EE9D67260_OFFSET UNITYSDK_OFFSET(0x5FAF400)
#define CLASS_3_9D301556F3E2275C__CTOR_OFFSET UNITYSDK_OFFSET(0x5FAEFD0)

inline static constexpr unsigned int Class_3_9D301556F3E2275C_TypeDefinitionIndex = 66528;

class Class_3_9D301556F3E2275C : public ::Class_2_455124A410922D9D<::MoleMole::HollowChessboard::ParticleSection*>
{
public:
	::MoleMole::HollowChessboard::RenderDataHandle Field_3_0; // 0x28

	::System::Void _ctor(::MoleMole::HollowChessboard::ParticleSection* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::ParticleSection*))((::PBYTE)hIl2Cpp + CLASS_3_9D301556F3E2275C__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_D87A7D8243E04FD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9D301556F3E2275C_METHOD_3_D87A7D8243E04FD7_OFFSET))(this);
	}

	::System::Void Method_3_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9D301556F3E2275C_METHOD_3_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_3_DEB7D04EE9D67260(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_9D301556F3E2275C_METHOD_3_DEB7D04EE9D67260_OFFSET))(this, a1);
	}

	::System::Void Method_3_B1936CE4DA97AA45_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9D301556F3E2275C_METHOD_3_B1936CE4DA97AA45_1_OFFSET))(this);
	}
};
