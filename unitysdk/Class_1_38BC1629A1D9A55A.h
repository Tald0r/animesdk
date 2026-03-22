#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_623FA07AC87B7A23.h"
#include "unitysdk/MoleMole/DisplayCase/DisplayBaseTransformData.h"
#include "unitysdk/MoleMole/DisplayCase/EDisplayItemSubType.h"
#include "unitysdk/System/Object.h"

class Class_1_E7140F4786C00178;
class Class_1_FAB330A19FB8EDA0;
namespace MoleMole::DisplayCase { class DisplayItemData; }
namespace System { class String; }

#define CLASS_1_38BC1629A1D9A55A_METHOD_1_14F265F5FFA8FAF9_OFFSET UNITYSDK_OFFSET(0xD5A3AE0)
#define CLASS_1_38BC1629A1D9A55A_METHOD_1_8DCA720CC8B8C655_OFFSET UNITYSDK_OFFSET(0xD5A3D30)
#define CLASS_1_38BC1629A1D9A55A_METHOD_1_B362935A698CA48E_OFFSET UNITYSDK_OFFSET(0xD5A3EB0)
#define CLASS_1_38BC1629A1D9A55A_METHOD_1_BD9E910C153DC0B2_OFFSET UNITYSDK_OFFSET(0xD5A4130)
#define CLASS_1_38BC1629A1D9A55A_METHOD_1_CAFE6CD3C037C178_OFFSET UNITYSDK_OFFSET(0xD5A3F90)

inline static constexpr unsigned int Class_1_38BC1629A1D9A55A_TypeDefinitionIndex = 39559;

class Class_1_38BC1629A1D9A55A : public ::System::Object
{
public:
	static ::Class_1_FAB330A19FB8EDA0* Method_1_14F265F5FFA8FAF9(::System::Int32 a1, ::MoleMole::DisplayCase::DisplayBaseTransformData a2)
	{
		return ((::Class_1_FAB330A19FB8EDA0*(*)(::System::Int32, ::MoleMole::DisplayCase::DisplayBaseTransformData))((::PBYTE)hIl2Cpp + CLASS_1_38BC1629A1D9A55A_METHOD_1_14F265F5FFA8FAF9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8DCA720CC8B8C655(::Class_1_FAB330A19FB8EDA0* a1, ::MoleMole::DisplayCase::DisplayItemData* a2)
	{
		return ((::System::Void(*)(::Class_1_FAB330A19FB8EDA0*, ::MoleMole::DisplayCase::DisplayItemData*))((::PBYTE)hIl2Cpp + CLASS_1_38BC1629A1D9A55A_METHOD_1_8DCA720CC8B8C655_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_B362935A698CA48E(::MoleMole::DisplayCase::EDisplayItemSubType a1)
	{
		return ((::System::String*(*)(::MoleMole::DisplayCase::EDisplayItemSubType))((::PBYTE)hIl2Cpp + CLASS_1_38BC1629A1D9A55A_METHOD_1_B362935A698CA48E_OFFSET))(a1);
	}

	static ::Class_1_E7140F4786C00178* Method_1_CAFE6CD3C037C178(::Class_1_FAB330A19FB8EDA0* a1)
	{
		return ((::Class_1_E7140F4786C00178*(*)(::Class_1_FAB330A19FB8EDA0*))((::PBYTE)hIl2Cpp + CLASS_1_38BC1629A1D9A55A_METHOD_1_CAFE6CD3C037C178_OFFSET))(a1);
	}

	static ::System::String* Method_1_BD9E910C153DC0B2(::Enum_3_623FA07AC87B7A23 a1)
	{
		return ((::System::String*(*)(::Enum_3_623FA07AC87B7A23))((::PBYTE)hIl2Cpp + CLASS_1_38BC1629A1D9A55A_METHOD_1_BD9E910C153DC0B2_OFFSET))(a1);
	}
};
