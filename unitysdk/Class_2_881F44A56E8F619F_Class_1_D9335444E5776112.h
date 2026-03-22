#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_881F44A56E8F619F_Struct_2_AF2E1D815DB2CF40.h"
#include "unitysdk/System/Object.h"

class Class_2_881F44A56E8F619F_Class_1_3E7AA55251139E0A;
namespace MoleMole { class UIUrbanMapPointWidgetContext; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_2_881F44A56E8F619F_CLASS_1_D9335444E5776112_METHOD_1_5C0BFDEE7D6962FB_OFFSET UNITYSDK_OFFSET(0xD71FCB0)
#define CLASS_2_881F44A56E8F619F_CLASS_1_D9335444E5776112_METHOD_1_9A7219D5B4C4B857_OFFSET UNITYSDK_OFFSET(0xD71F770)
#define CLASS_2_881F44A56E8F619F_CLASS_1_D9335444E5776112__CTOR_OFFSET UNITYSDK_OFFSET(0xD71F760)

inline static constexpr unsigned int Class_2_881F44A56E8F619F_Class_1_D9335444E5776112_TypeDefinitionIndex = 44562;

class Class_2_881F44A56E8F619F_Class_1_D9335444E5776112 : public ::System::Object
{
public:
	::Class_2_881F44A56E8F619F_Class_1_3E7AA55251139E0A* Field_1_1; // 0x10
	::Class_2_881F44A56E8F619F_Struct_2_AF2E1D815DB2CF40 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_CLASS_1_D9335444E5776112__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_9A7219D5B4C4B857(::MoleMole::UIUrbanMapPointWidgetContext* a1, ::Class_2_881F44A56E8F619F_Struct_2_AF2E1D815DB2CF40 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIUrbanMapPointWidgetContext*, ::Class_2_881F44A56E8F619F_Struct_2_AF2E1D815DB2CF40))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_CLASS_1_D9335444E5776112_METHOD_1_9A7219D5B4C4B857_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IList_1<::Class_2_881F44A56E8F619F_Struct_2_AF2E1D815DB2CF40>* Method_1_5C0BFDEE7D6962FB()
	{
		return ((::System::Collections::Generic::IList_1<::Class_2_881F44A56E8F619F_Struct_2_AF2E1D815DB2CF40>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_CLASS_1_D9335444E5776112_METHOD_1_5C0BFDEE7D6962FB_OFFSET))(this);
	}
};
