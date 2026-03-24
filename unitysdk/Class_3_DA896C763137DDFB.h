#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_1A3414978CEF17EE.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"

class Class_1_9876AE41D0DC17C7;
namespace MoleMole::HollowChessboard { class NpcTextureBehaviorSection; }

#define CLASS_3_DA896C763137DDFB_METHOD_3_0868EF727040C390_OFFSET UNITYSDK_OFFSET(0x8298FD0)
#define CLASS_3_DA896C763137DDFB_METHOD_3_AB46303CBADE3FEA_OFFSET UNITYSDK_OFFSET(0x8299130)
#define CLASS_3_DA896C763137DDFB_METHOD_3_B1936CE4DA97AA45_1_OFFSET UNITYSDK_OFFSET(0x8298DF0)
#define CLASS_3_DA896C763137DDFB_METHOD_3_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x8298EE0)
#define CLASS_3_DA896C763137DDFB_METHOD_3_DEB7D04EE9D67260_OFFSET UNITYSDK_OFFSET(0x8298A20)
#define CLASS_3_DA896C763137DDFB__CTOR_OFFSET UNITYSDK_OFFSET(0x8298A00)

inline static constexpr unsigned int Class_3_DA896C763137DDFB_TypeDefinitionIndex = 38166;

class Class_3_DA896C763137DDFB : public ::Class_2_1A3414978CEF17EE<::MoleMole::HollowChessboard::NpcTextureBehaviorSection*>
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
