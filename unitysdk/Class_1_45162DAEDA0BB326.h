#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsComponentTask_1.h"
#include "unitysdk/System/Object.h"

class Class_3_C0D5B1A036ED00F0;
class Class_3_EA02B975BED3466B;
class Class_3_F35B080B137ECC46;
namespace Nap::NapECS { class EcsWorld; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9> class Func_9; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7> class Func_7; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Func_5; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_45162DAEDA0BB326__CCTOR_OFFSET UNITYSDK_OFFSET(0x6D27F80)

inline static constexpr unsigned int Class_1_45162DAEDA0BB326_TypeDefinitionIndex = 70567;

class Class_1_45162DAEDA0BB326 : public ::System::Object
{
public:
	static ::Nap::NapECS::EcsComponentTask_1<::Class_3_EA02B975BED3466B*>* StaticGet_Field_1_1()
	{
		return (::Nap::NapECS::EcsComponentTask_1<::Class_3_EA02B975BED3466B*>*)Il2CppClass::FromTypeDefinitionIndex(Class_1_45162DAEDA0BB326_TypeDefinitionIndex)->GetStaticField(0x2DFA0);
	}
	static ::Nap::NapECS::EcsComponentTask_1<::Class_3_C0D5B1A036ED00F0*>* StaticGet_Field_1_2()
	{
		return (::Nap::NapECS::EcsComponentTask_1<::Class_3_C0D5B1A036ED00F0*>*)Il2CppClass::FromTypeDefinitionIndex(Class_1_45162DAEDA0BB326_TypeDefinitionIndex)->GetStaticField(0x2DFF0);
	}
	static ::Nap::NapECS::EcsComponentTask_1<::Class_3_F35B080B137ECC46*>* StaticGet_Field_1_0()
	{
		return (::Nap::NapECS::EcsComponentTask_1<::Class_3_F35B080B137ECC46*>*)Il2CppClass::FromTypeDefinitionIndex(Class_1_45162DAEDA0BB326_TypeDefinitionIndex)->GetStaticField(0x2E040);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_45162DAEDA0BB326__CCTOR_OFFSET))();
	}
};
