#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_455124A410922D9D.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"

class Class_1_9CFA2C562F612E08;

#define CLASS_3_465AA63B1FE68F90_METHOD_3_9D8CB5E47C1952BD_OFFSET UNITYSDK_OFFSET(0xB135810)
#define CLASS_3_465AA63B1FE68F90_METHOD_3_B1936CE4DA97AA45_1_OFFSET UNITYSDK_OFFSET(0xB136250)
#define CLASS_3_465AA63B1FE68F90_METHOD_3_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xB135B80)
#define CLASS_3_465AA63B1FE68F90_METHOD_3_DEB7D04EE9D67260_OFFSET UNITYSDK_OFFSET(0xB135D90)
#define CLASS_3_465AA63B1FE68F90__CTOR_OFFSET UNITYSDK_OFFSET(0xB1357F0)

inline static constexpr unsigned int Class_3_465AA63B1FE68F90_TypeDefinitionIndex = 66277;

class Class_3_465AA63B1FE68F90 : public ::Class_2_455124A410922D9D<::Class_1_9CFA2C562F612E08*>
{
public:
	::MoleMole::HollowChessboard::RenderDataHandle Field_3_0; // 0x28

	::System::Void _ctor(::Class_1_9CFA2C562F612E08* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9CFA2C562F612E08*))((::PBYTE)hIl2Cpp + CLASS_3_465AA63B1FE68F90__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_9D8CB5E47C1952BD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_465AA63B1FE68F90_METHOD_3_9D8CB5E47C1952BD_OFFSET))(this);
	}

	::System::Void Method_3_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_465AA63B1FE68F90_METHOD_3_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_3_DEB7D04EE9D67260(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_465AA63B1FE68F90_METHOD_3_DEB7D04EE9D67260_OFFSET))(this, a1);
	}

	::System::Void Method_3_B1936CE4DA97AA45_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_465AA63B1FE68F90_METHOD_3_B1936CE4DA97AA45_1_OFFSET))(this);
	}
};
