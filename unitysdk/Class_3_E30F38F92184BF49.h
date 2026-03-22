#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1F219549AE9B7C82_Enum_3_F1DF3CE6FAEE3AB7.h"
#include "unitysdk/Class_2_D5115202A5A8225D.h"

namespace System { class String; }

#define CLASS_3_E30F38F92184BF49_METHOD_3_12EDF5E74B374F5C_OFFSET UNITYSDK_OFFSET(0x9131750)
#define CLASS_3_E30F38F92184BF49_METHOD_3_7095CC938A9799B6_OFFSET UNITYSDK_OFFSET(0x9131840)
#define CLASS_3_E30F38F92184BF49__CTOR_OFFSET UNITYSDK_OFFSET(0x9131730)

inline static constexpr unsigned int Class_3_E30F38F92184BF49_TypeDefinitionIndex = 43138;

class Class_3_E30F38F92184BF49 : public ::Class_2_D5115202A5A8225D
{
public:
	::System::Int32 Field_3_0; // 0x18

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E30F38F92184BF49__CTOR_OFFSET))(this, a1);
	}

	::Class_1_1F219549AE9B7C82_Enum_3_F1DF3CE6FAEE3AB7 Method_3_12EDF5E74B374F5C(::System::String* a1)
	{
		return ((::Class_1_1F219549AE9B7C82_Enum_3_F1DF3CE6FAEE3AB7(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_E30F38F92184BF49_METHOD_3_12EDF5E74B374F5C_OFFSET))(this, a1);
	}

	::Class_1_1F219549AE9B7C82_Enum_3_F1DF3CE6FAEE3AB7 Method_3_7095CC938A9799B6(::System::String* a1)
	{
		return ((::Class_1_1F219549AE9B7C82_Enum_3_F1DF3CE6FAEE3AB7(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_E30F38F92184BF49_METHOD_3_7095CC938A9799B6_OFFSET))(this, a1);
	}
};
