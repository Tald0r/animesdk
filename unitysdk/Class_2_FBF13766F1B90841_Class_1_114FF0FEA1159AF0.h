#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_FBF13766F1B90841_Struct_2_18E794CDBE104DC1.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Cameras { class NapVirtualPipelineCamera; }

#define CLASS_2_FBF13766F1B90841_CLASS_1_114FF0FEA1159AF0_METHOD_1_B5A55817A22DFFF3_OFFSET UNITYSDK_OFFSET(0x6832120)
#define CLASS_2_FBF13766F1B90841_CLASS_1_114FF0FEA1159AF0__CTOR_OFFSET UNITYSDK_OFFSET(0x6832110)

inline static constexpr unsigned int Class_2_FBF13766F1B90841_Class_1_114FF0FEA1159AF0_TypeDefinitionIndex = 58147;

class Class_2_FBF13766F1B90841_Class_1_114FF0FEA1159AF0 : public ::System::Object
{
public:
	::MoleMole::Cameras::NapVirtualPipelineCamera* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FBF13766F1B90841_CLASS_1_114FF0FEA1159AF0__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_B5A55817A22DFFF3(::Class_2_FBF13766F1B90841_Struct_2_18E794CDBE104DC1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_FBF13766F1B90841_Struct_2_18E794CDBE104DC1))((::PBYTE)hIl2Cpp + CLASS_2_FBF13766F1B90841_CLASS_1_114FF0FEA1159AF0_METHOD_1_B5A55817A22DFFF3_OFFSET))(this, a1);
	}
};
