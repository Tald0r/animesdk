#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class HollowEntityLayerMaskConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_A343D04EB9BC27B4_METHOD_1_0BE1846AC20D43BE_OFFSET UNITYSDK_OFFSET(0x968FE40)
#define CLASS_1_A343D04EB9BC27B4_METHOD_1_A8AE4A9A45E37F95_OFFSET UNITYSDK_OFFSET(0x9690110)
#define CLASS_1_A343D04EB9BC27B4_METHOD_1_BABCBCA186A03D23_OFFSET UNITYSDK_OFFSET(0x9690080)
#define CLASS_1_A343D04EB9BC27B4_METHOD_1_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x968FD40)

inline static constexpr unsigned int Class_1_A343D04EB9BC27B4_TypeDefinitionIndex = 81238;

class Class_1_A343D04EB9BC27B4 : public ::System::Object
{
public:
	static ::MoleMole::HollowEntityLayerMaskConfig** StaticGet_Field_1_0()
	{
		return (::MoleMole::HollowEntityLayerMaskConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A343D04EB9BC27B4_TypeDefinitionIndex)->GetStaticField(0x3A8E0);
	}

	static ::System::Void Method_1_D0BD1377F2594D33()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A343D04EB9BC27B4_METHOD_1_D0BD1377F2594D33_OFFSET))();
	}

	static ::System::Void Method_1_0BE1846AC20D43BE(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_A343D04EB9BC27B4_METHOD_1_0BE1846AC20D43BE_OFFSET))(a1, a2);
	}

	static ::MoleMole::HollowEntityLayerMaskConfig* Method_1_BABCBCA186A03D23()
	{
		return ((::MoleMole::HollowEntityLayerMaskConfig*(*)())((::PBYTE)hIl2Cpp + CLASS_1_A343D04EB9BC27B4_METHOD_1_BABCBCA186A03D23_OFFSET))();
	}

	static ::System::Void Method_1_A8AE4A9A45E37F95(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A343D04EB9BC27B4_METHOD_1_A8AE4A9A45E37F95_OFFSET))(a1, a2, a3, a4);
	}
};
