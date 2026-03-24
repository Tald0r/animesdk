#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C2937544035FD07F.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_1A345EAE5F749316_105;
class Class_3_76E041AE70C9F960;
class Class_3_BD4AA5812E2F928C_1;
class Class_3_EC25B6E84130E2CA;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_1237317A684F55D0_METHOD_2_0EB6B7A416AF5EB9_OFFSET UNITYSDK_OFFSET(0x90573F0)
#define CLASS_2_1237317A684F55D0_METHOD_2_2CB3AF72F132C6BA_OFFSET UNITYSDK_OFFSET(0x9056F10)
#define CLASS_2_1237317A684F55D0_METHOD_2_359EE0EF34603AD8_OFFSET UNITYSDK_OFFSET(0x9056BC0)
#define CLASS_2_1237317A684F55D0_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x9056A70)
#define CLASS_2_1237317A684F55D0_METHOD_2_620E3FDB112FB4DC_OFFSET UNITYSDK_OFFSET(0x90570E0)
#define CLASS_2_1237317A684F55D0_METHOD_2_E92BA641366CE9D9_OFFSET UNITYSDK_OFFSET(0x9057830)
#define CLASS_2_1237317A684F55D0_ONSTART_OFFSET UNITYSDK_OFFSET(0x9056A10)
#define CLASS_2_1237317A684F55D0__CTOR_OFFSET UNITYSDK_OFFSET(0x9056A00)

inline static constexpr unsigned int Class_2_1237317A684F55D0_TypeDefinitionIndex = 80599;

class Class_2_1237317A684F55D0 : public ::Class_1_C2937544035FD07F
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1237317A684F55D0__CTOR_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1237317A684F55D0_ONSTART_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1237317A684F55D0_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_359EE0EF34603AD8(::MoleMole::Battle::Entity* a1, ::System::String* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_1237317A684F55D0_METHOD_2_359EE0EF34603AD8_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_2CB3AF72F132C6BA(::System::Collections::Generic::List_1<::Class_3_EC25B6E84130E2CA*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_3_EC25B6E84130E2CA*>*))((::PBYTE)hIl2Cpp + CLASS_2_1237317A684F55D0_METHOD_2_2CB3AF72F132C6BA_OFFSET))(this, a1);
	}

	::System::Void Method_2_620E3FDB112FB4DC(::Class_3_76E041AE70C9F960* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_76E041AE70C9F960*))((::PBYTE)hIl2Cpp + CLASS_2_1237317A684F55D0_METHOD_2_620E3FDB112FB4DC_OFFSET))(this, a1);
	}

	::System::Void Method_2_0EB6B7A416AF5EB9(::Class_3_BD4AA5812E2F928C_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_BD4AA5812E2F928C_1*))((::PBYTE)hIl2Cpp + CLASS_2_1237317A684F55D0_METHOD_2_0EB6B7A416AF5EB9_OFFSET))(this, a1);
	}

	::System::Void Method_2_E92BA641366CE9D9(::Class_3_1A345EAE5F749316_105* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_1A345EAE5F749316_105*))((::PBYTE)hIl2Cpp + CLASS_2_1237317A684F55D0_METHOD_2_E92BA641366CE9D9_OFFSET))(this, a1);
	}
};
