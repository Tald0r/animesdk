#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3D452FA003157C19_Class_2_79ABFC3B03A43BD9.h"
#include "unitysdk/Class_1_3D452FA003157C19_Enum_3_771D25DE24EB14A9.h"

namespace System { class String; }

#define CLASS_1_3D452FA003157C19_CLASS_3_E190156E60C8A95B_METHOD_3_83DA3EC57FF907F4_OFFSET UNITYSDK_OFFSET(0x87FA590)
#define CLASS_1_3D452FA003157C19_CLASS_3_E190156E60C8A95B__CTOR_OFFSET UNITYSDK_OFFSET(0x87FA570)

inline static constexpr unsigned int Class_1_3D452FA003157C19_Class_3_E190156E60C8A95B_TypeDefinitionIndex = 39439;

class Class_1_3D452FA003157C19_Class_3_E190156E60C8A95B : public ::Class_1_3D452FA003157C19_Class_2_79ABFC3B03A43BD9
{
public:
	::System::String* Field_3_1; // 0x28
	::System::String* Field_3_0; // 0x30
	::Class_1_3D452FA003157C19_Enum_3_771D25DE24EB14A9 Field_3_2; // 0x38

	::System::Void _ctor(::System::String* a1, ::System::String* a2, ::Class_1_3D452FA003157C19_Enum_3_771D25DE24EB14A9 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::Class_1_3D452FA003157C19_Enum_3_771D25DE24EB14A9))((::PBYTE)hIl2Cpp + CLASS_1_3D452FA003157C19_CLASS_3_E190156E60C8A95B__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_3_83DA3EC57FF907F4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D452FA003157C19_CLASS_3_E190156E60C8A95B_METHOD_3_83DA3EC57FF907F4_OFFSET))(this);
	}
};
