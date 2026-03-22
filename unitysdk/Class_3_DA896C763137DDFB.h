#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_455124A410922D9D.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"

class Class_1_9876AE41D0DC17C7;
namespace MoleMole::HollowChessboard { class NpcTextureBehaviorSection; }

#define CLASS_3_DA896C763137DDFB_METHOD_3_0868EF727040C390_OFFSET UNITYSDK_OFFSET(0x9071400)
#define CLASS_3_DA896C763137DDFB_METHOD_3_AB46303CBADE3FEA_OFFSET UNITYSDK_OFFSET(0x9071560)
#define CLASS_3_DA896C763137DDFB_METHOD_3_B1936CE4DA97AA45_1_OFFSET UNITYSDK_OFFSET(0x9071220)
#define CLASS_3_DA896C763137DDFB_METHOD_3_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x9071310)
#define CLASS_3_DA896C763137DDFB_METHOD_3_DEB7D04EE9D67260_OFFSET UNITYSDK_OFFSET(0x9070E50)
#define CLASS_3_DA896C763137DDFB__CTOR_OFFSET UNITYSDK_OFFSET(0x9070E30)

inline static constexpr unsigned int Class_3_DA896C763137DDFB_TypeDefinitionIndex = 51045;

class Class_3_DA896C763137DDFB : public ::Class_2_455124A410922D9D<::MoleMole::HollowChessboard::NpcTextureBehaviorSection*>
{
public:
	::MoleMole::HollowChessboard::RenderDataHandle Field_3_0; // 0x28
	::MoleMole::HollowChessboard::NpcTextureBehaviorSection* Field_3_1; // 0x38

	::System::Void _ctor(::MoleMole::HollowChessboard::NpcTextureBehaviorSection* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::NpcTextureBehaviorSection*))((::PBYTE)hIl2Cpp + CLASS_3_DA896C763137DDFB__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_DEB7D04EE9D67260(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_DA896C763137DDFB_METHOD_3_DEB7D04EE9D67260_OFFSET))(this, a1);
	}

	::System::Void Method_3_0868EF727040C390()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DA896C763137DDFB_METHOD_3_0868EF727040C390_OFFSET))(this);
	}

	::System::Void Method_3_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DA896C763137DDFB_METHOD_3_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_3_AB46303CBADE3FEA(::Class_1_9876AE41D0DC17C7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9876AE41D0DC17C7*))((::PBYTE)hIl2Cpp + CLASS_3_DA896C763137DDFB_METHOD_3_AB46303CBADE3FEA_OFFSET))(this, a1);
	}

	::System::Void Method_3_B1936CE4DA97AA45_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DA896C763137DDFB_METHOD_3_B1936CE4DA97AA45_1_OFFSET))(this);
	}
};
