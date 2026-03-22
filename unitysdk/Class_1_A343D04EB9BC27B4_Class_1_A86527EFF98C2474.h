#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class HollowEntityLayerMaskConfig; }
namespace System { class Action; }

#define CLASS_1_A343D04EB9BC27B4_CLASS_1_A86527EFF98C2474_METHOD_1_DCA3D3B6D2BB5DDB_OFFSET UNITYSDK_OFFSET(0x8CCC0F0)
#define CLASS_1_A343D04EB9BC27B4_CLASS_1_A86527EFF98C2474__CTOR_OFFSET UNITYSDK_OFFSET(0x8CCC0E0)

inline static constexpr unsigned int Class_1_A343D04EB9BC27B4_Class_1_A86527EFF98C2474_TypeDefinitionIndex = 69299;

class Class_1_A343D04EB9BC27B4_Class_1_A86527EFF98C2474 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A343D04EB9BC27B4_CLASS_1_A86527EFF98C2474__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_DCA3D3B6D2BB5DDB(::MoleMole::HollowEntityLayerMaskConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowEntityLayerMaskConfig*))((::PBYTE)hIl2Cpp + CLASS_1_A343D04EB9BC27B4_CLASS_1_A86527EFF98C2474_METHOD_1_DCA3D3B6D2BB5DDB_OFFSET))(this, a1);
	}
};
