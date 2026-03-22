#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_57DC80FD7B2B919F.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/MoleMole/Config/SpecialDamageTextType.h"
#include "unitysdk/MoleMole/Config/TeamProperty.h"
#include "unitysdk/Struct_2_0EA61705E6C719A1.h"
#include "unitysdk/Struct_2_2B6FA625C20F556D.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_1CDA382D823F8E80;
class Class_1_55FB143FAD52FF89;
class Class_1_817E737241BDC0A2;
class Class_1_EA1FEF8121ADE963;
class Class_2_013DB5EBD89922B2;
class Class_2_131E282CCAEB876E;
class Class_2_C5D830057BD6D4F5_1;
class Class_3_98C806684F7CC372_5;
class Class_3_CC4688F240DF8ADD;
class Class_3_E85F004AD455EAA0;
class Class_3_F25445702F7D8455;
class Class_3_F41D242A20F8FE06;
class Class_3_F97B015544BE936B;
namespace MoleMole { class SkillCharacterScriptConfig; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigAttackActiveFrameDynamicProp; }
namespace MoleMole::Config { class ConfigEntityAnimEvent; }
namespace MoleMole::Config { class ConfigEntityAttackProperty; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_EF55DC41D1A933FC_METHOD_1_07FA5311A21363BC_OFFSET UNITYSDK_OFFSET(0x17CB8500)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_0995D3B9DB116847_OFFSET UNITYSDK_OFFSET(0x7500340)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_09DA5ED950396F79_1_OFFSET UNITYSDK_OFFSET(0x17CB9650)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_09DA5ED950396F79_OFFSET UNITYSDK_OFFSET(0x75050F0)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_0B74D8D975246B1E_1_OFFSET UNITYSDK_OFFSET(0x7501FA0)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_0B74D8D975246B1E_2_OFFSET UNITYSDK_OFFSET(0x75056D0)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_0B74D8D975246B1E_3_OFFSET UNITYSDK_OFFSET(0x17CB7BC0)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_0B74D8D975246B1E_OFFSET UNITYSDK_OFFSET(0x7500290)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_0C2A81E31EAC9289_1_OFFSET UNITYSDK_OFFSET(0x17CB8190)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_0C2A81E31EAC9289_OFFSET UNITYSDK_OFFSET(0x7501280)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_0D011244ED0E3A69_OFFSET UNITYSDK_OFFSET(0x7501200)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_167FAAA067CEAB55_OFFSET UNITYSDK_OFFSET(0x7505190)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_253910661E8A261A_1_OFFSET UNITYSDK_OFFSET(0x17CBA0A0)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_253910661E8A261A_OFFSET UNITYSDK_OFFSET(0x75021B0)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_346C117804763EA0_OFFSET UNITYSDK_OFFSET(0x75017F0)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_359DCBE237CA4E13_OFFSET UNITYSDK_OFFSET(0x17CB94D0)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_37E7E65176DAD2C4_1_OFFSET UNITYSDK_OFFSET(0x75016D0)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_37E7E65176DAD2C4_OFFSET UNITYSDK_OFFSET(0x7501760)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_3C26320373781188_OFFSET UNITYSDK_OFFSET(0x17CBC9F0)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_3F24DD29F13CF97A_OFFSET UNITYSDK_OFFSET(0x17CB8450)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_450A5338099E7516_OFFSET UNITYSDK_OFFSET(0x17CBC530)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_45F25BAC21D2CA9C_OFFSET UNITYSDK_OFFSET(0x7501310)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_4C57EB10AA59056D_OFFSET UNITYSDK_OFFSET(0x7504B20)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_4E1A41DD99A098BA_OFFSET UNITYSDK_OFFSET(0x7501C80)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_54DD4FAD47BAA0FA_OFFSET UNITYSDK_OFFSET(0x17CB96F0)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_55F90C36531113DD_OFFSET UNITYSDK_OFFSET(0x7501B70)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_574E978F212BDA80_1_OFFSET UNITYSDK_OFFSET(0x17CB8310)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_574E978F212BDA80_OFFSET UNITYSDK_OFFSET(0x7504680)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_5CB4651F3D5EBF22_OFFSET UNITYSDK_OFFSET(0x17CB7FD0)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_640BBBFEAF45D251_OFFSET UNITYSDK_OFFSET(0x17CB7C70)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_679ED564F392040E_OFFSET UNITYSDK_OFFSET(0x17CB7860)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_6C2C0C3F7824A2E4_OFFSET UNITYSDK_OFFSET(0x7504720)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_73F8D016EAB35889_OFFSET UNITYSDK_OFFSET(0x17CB9B70)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_77025FC68964D3DA_OFFSET UNITYSDK_OFFSET(0x17CBC2E0)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_778FD54812844044_OFFSET UNITYSDK_OFFSET(0x17CB8220)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_871D61ADCA84C8DC_OFFSET UNITYSDK_OFFSET(0x17CB8580)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_8F3E2BAB19B44644_OFFSET UNITYSDK_OFFSET(0x17CB83B0)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_8F4EE5BA35D563CD_OFFSET UNITYSDK_OFFSET(0x7502050)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_9691F53EFF557F24_OFFSET UNITYSDK_OFFSET(0x75022D0)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_999F4E3A97BFECE3_OFFSET UNITYSDK_OFFSET(0x7504440)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_A84C664249F83E31_OFFSET UNITYSDK_OFFSET(0x7501510)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_B546E35380E30DA3_OFFSET UNITYSDK_OFFSET(0x17CB8980)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_B57AA5C2B2D63B8A_OFFSET UNITYSDK_OFFSET(0x17CBA460)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_B9AFA1C94DF8A7DF_OFFSET UNITYSDK_OFFSET(0x17CBC5B0)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_BF15C2C90034966C_OFFSET UNITYSDK_OFFSET(0x17CBBF40)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_C13178A8AA1846F3_OFFSET UNITYSDK_OFFSET(0x7501100)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_C20EF91D22125575_OFFSET UNITYSDK_OFFSET(0x17CB90A0)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_C6737057133F501E_OFFSET UNITYSDK_OFFSET(0x17CBC6A0)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_CD492C43FD93432B_OFFSET UNITYSDK_OFFSET(0x7505780)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_D2792EAECC18E5FB_OFFSET UNITYSDK_OFFSET(0x17CB9860)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_DFD870BCD1B01411_OFFSET UNITYSDK_OFFSET(0x17CB88F0)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_F443EC675167EA09_OFFSET UNITYSDK_OFFSET(0x7505220)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_FB2EF955CBD34588_OFFSET UNITYSDK_OFFSET(0x17CBC900)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_FE177DB5D6AD4226_OFFSET UNITYSDK_OFFSET(0x7501EE0)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_FE34AA911BE905B9_OFFSET UNITYSDK_OFFSET(0x17CBA1C0)

inline static constexpr unsigned int Class_1_EF55DC41D1A933FC_TypeDefinitionIndex = 78395;

class Class_1_EF55DC41D1A933FC : public ::System::Object
{
public:
	static ::Class_3_98C806684F7CC372_5** StaticGet_Field_1_0()
	{
		return (::Class_3_98C806684F7CC372_5**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EF55DC41D1A933FC_TypeDefinitionIndex)->GetStaticField(0x30B50);
	}

	static ::System::Void Method_1_0B74D8D975246B1E(::System::Single& a1, ::Class_3_F97B015544BE936B* a2, ::MoleMole::Config::ConfigEntityAnimEvent* a3)
	{
		return ((::System::Void(*)(::System::Single&, ::Class_3_F97B015544BE936B*, ::MoleMole::Config::ConfigEntityAnimEvent*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_0B74D8D975246B1E_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0995D3B9DB116847(::Class_1_EA1FEF8121ADE963* a1, ::Class_3_F97B015544BE936B* a2)
	{
		return ((::System::Void(*)(::Class_1_EA1FEF8121ADE963*, ::Class_3_F97B015544BE936B*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_0995D3B9DB116847_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0D011244ED0E3A69(::Class_1_EA1FEF8121ADE963* a1, ::MoleMole::Config::SpecialDamageTextType a2)
	{
		return ((::System::Void(*)(::Class_1_EA1FEF8121ADE963*, ::MoleMole::Config::SpecialDamageTextType))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_0D011244ED0E3A69_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0C2A81E31EAC9289(::Class_1_EA1FEF8121ADE963* a1, ::Class_3_F97B015544BE936B* a2, ::MoleMole::Config::ConfigEntityAnimEvent* a3)
	{
		return ((::System::Void(*)(::Class_1_EA1FEF8121ADE963*, ::Class_3_F97B015544BE936B*, ::MoleMole::Config::ConfigEntityAnimEvent*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_0C2A81E31EAC9289_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_A84C664249F83E31(::Class_1_EA1FEF8121ADE963* a1, ::Class_3_F97B015544BE936B* a2, ::MoleMole::Config::ConfigEntityAnimEvent* a3)
	{
		return ((::System::Void(*)(::Class_1_EA1FEF8121ADE963*, ::Class_3_F97B015544BE936B*, ::MoleMole::Config::ConfigEntityAnimEvent*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_A84C664249F83E31_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_1_346C117804763EA0(::MoleMole::Config::DamageElementType a1, ::MoleMole::Battle::Entity* a2, ::Class_3_F41D242A20F8FE06* a3, ::Class_1_EA1FEF8121ADE963* a4)
	{
		return ((::System::Single(*)(::MoleMole::Config::DamageElementType, ::MoleMole::Battle::Entity*, ::Class_3_F41D242A20F8FE06*, ::Class_1_EA1FEF8121ADE963*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_346C117804763EA0_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Single Method_1_55F90C36531113DD(::Class_3_CC4688F240DF8ADD* a1, ::Class_1_EA1FEF8121ADE963* a2)
	{
		return ((::System::Single(*)(::Class_3_CC4688F240DF8ADD*, ::Class_1_EA1FEF8121ADE963*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_55F90C36531113DD_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_4E1A41DD99A098BA(::System::Single a1, ::System::Int32 a2)
	{
		return ((::System::Single(*)(::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_4E1A41DD99A098BA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_37E7E65176DAD2C4(::Class_1_EA1FEF8121ADE963* a1, ::Class_3_F97B015544BE936B* a2, ::MoleMole::Config::ConfigEntityAnimEvent* a3)
	{
		return ((::System::Void(*)(::Class_1_EA1FEF8121ADE963*, ::Class_3_F97B015544BE936B*, ::MoleMole::Config::ConfigEntityAnimEvent*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_37E7E65176DAD2C4_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_FE177DB5D6AD4226(::Class_1_EA1FEF8121ADE963* a1, ::Class_1_55FB143FAD52FF89* a2)
	{
		return ((::System::Void(*)(::Class_1_EA1FEF8121ADE963*, ::Class_1_55FB143FAD52FF89*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_FE177DB5D6AD4226_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0B74D8D975246B1E_1(::System::Single& a1, ::Class_3_F97B015544BE936B* a2, ::MoleMole::Config::ConfigEntityAnimEvent* a3)
	{
		return ((::System::Void(*)(::System::Single&, ::Class_3_F97B015544BE936B*, ::MoleMole::Config::ConfigEntityAnimEvent*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_0B74D8D975246B1E_1_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_1_8F4EE5BA35D563CD(::MoleMole::Config::DamageElementType a1, ::Class_2_013DB5EBD89922B2* a2)
	{
		return ((::System::Single(*)(::MoleMole::Config::DamageElementType, ::Class_2_013DB5EBD89922B2*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_8F4EE5BA35D563CD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_253910661E8A261A(::Class_1_EA1FEF8121ADE963* a1, ::Class_1_817E737241BDC0A2* a2, ::Class_3_F41D242A20F8FE06* a3)
	{
		return ((::System::Void(*)(::Class_1_EA1FEF8121ADE963*, ::Class_1_817E737241BDC0A2*, ::Class_3_F41D242A20F8FE06*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_253910661E8A261A_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_9691F53EFF557F24(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2, ::Class_1_EA1FEF8121ADE963* a3, ::Class_3_F97B015544BE936B* a4, ::Class_1_817E737241BDC0A2* a5)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_EA1FEF8121ADE963*, ::Class_3_F97B015544BE936B*, ::Class_1_817E737241BDC0A2*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_9691F53EFF557F24_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_574E978F212BDA80(::System::Single& a1, ::Class_3_F97B015544BE936B* a2, ::MoleMole::Config::ConfigAttackActiveFrameDynamicProp* a3)
	{
		return ((::System::Void(*)(::System::Single&, ::Class_3_F97B015544BE936B*, ::MoleMole::Config::ConfigAttackActiveFrameDynamicProp*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_574E978F212BDA80_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_C13178A8AA1846F3(::Class_1_EA1FEF8121ADE963* a1, ::Class_1_817E737241BDC0A2* a2, ::Class_3_F41D242A20F8FE06* a3)
	{
		return ((::System::Void(*)(::Class_1_EA1FEF8121ADE963*, ::Class_1_817E737241BDC0A2*, ::Class_3_F41D242A20F8FE06*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_C13178A8AA1846F3_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_6C2C0C3F7824A2E4(::MoleMole::Battle::Entity* a1, ::Class_1_EA1FEF8121ADE963* a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::Class_1_EA1FEF8121ADE963*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_6C2C0C3F7824A2E4_OFFSET))(a1, a2);
	}

	static ::Class_1_EA1FEF8121ADE963* Method_1_4C57EB10AA59056D(::MoleMole::Battle::Entity* a1, ::Class_1_EA1FEF8121ADE963* a2, ::System::Boolean a3)
	{
		return ((::Class_1_EA1FEF8121ADE963*(*)(::MoleMole::Battle::Entity*, ::Class_1_EA1FEF8121ADE963*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_4C57EB10AA59056D_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_37E7E65176DAD2C4_1(::Class_1_EA1FEF8121ADE963* a1, ::Class_3_F97B015544BE936B* a2, ::MoleMole::Config::ConfigEntityAnimEvent* a3)
	{
		return ((::System::Void(*)(::Class_1_EA1FEF8121ADE963*, ::Class_3_F97B015544BE936B*, ::MoleMole::Config::ConfigEntityAnimEvent*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_37E7E65176DAD2C4_1_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_09DA5ED950396F79(::Class_1_EA1FEF8121ADE963* a1, ::Class_1_55FB143FAD52FF89* a2)
	{
		return ((::System::Void(*)(::Class_1_EA1FEF8121ADE963*, ::Class_1_55FB143FAD52FF89*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_09DA5ED950396F79_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_167FAAA067CEAB55(::Class_1_EA1FEF8121ADE963* a1, ::Class_1_55FB143FAD52FF89* a2)
	{
		return ((::System::Void(*)(::Class_1_EA1FEF8121ADE963*, ::Class_1_55FB143FAD52FF89*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_167FAAA067CEAB55_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_999F4E3A97BFECE3(::Class_1_EA1FEF8121ADE963* a1, ::Class_3_F41D242A20F8FE06* a2)
	{
		return ((::System::Single(*)(::Class_1_EA1FEF8121ADE963*, ::Class_3_F41D242A20F8FE06*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_999F4E3A97BFECE3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F443EC675167EA09(::System::Single& a1, ::MoleMole::Config::ConfigAttackActiveFrameDynamicProp* a2, ::MoleMole::Battle::Entity* a3)
	{
		return ((::System::Void(*)(::System::Single&, ::MoleMole::Config::ConfigAttackActiveFrameDynamicProp*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_F443EC675167EA09_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0B74D8D975246B1E_2(::System::Single& a1, ::Class_3_F97B015544BE936B* a2, ::MoleMole::Config::ConfigEntityAnimEvent* a3)
	{
		return ((::System::Void(*)(::System::Single&, ::Class_3_F97B015544BE936B*, ::MoleMole::Config::ConfigEntityAnimEvent*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_0B74D8D975246B1E_2_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_45F25BAC21D2CA9C(::System::Single& a1, ::Class_3_F97B015544BE936B* a2, ::MoleMole::Config::ConfigEntityAnimEvent* a3)
	{
		return ((::System::Void(*)(::System::Single&, ::Class_3_F97B015544BE936B*, ::MoleMole::Config::ConfigEntityAnimEvent*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_45F25BAC21D2CA9C_OFFSET))(a1, a2, a3);
	}

	static ::Class_1_EA1FEF8121ADE963* Method_1_CD492C43FD93432B(::Class_3_F97B015544BE936B* a1, ::MoleMole::Config::ConfigEntityAttackProperty* a2, ::Class_1_1CDA382D823F8E80* a3, ::Struct_2_2B6FA625C20F556D a4, ::MoleMole::Config::ConfigEntityAnimEvent* a5)
	{
		return ((::Class_1_EA1FEF8121ADE963*(*)(::Class_3_F97B015544BE936B*, ::MoleMole::Config::ConfigEntityAttackProperty*, ::Class_1_1CDA382D823F8E80*, ::Struct_2_2B6FA625C20F556D, ::MoleMole::Config::ConfigEntityAnimEvent*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_CD492C43FD93432B_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::Class_2_C5D830057BD6D4F5_1* Method_1_679ED564F392040E(::MoleMole::Battle::Entity* a1, ::Class_1_EA1FEF8121ADE963* a2, ::Class_3_F25445702F7D8455* a3)
	{
		return ((::Class_2_C5D830057BD6D4F5_1*(*)(::MoleMole::Battle::Entity*, ::Class_1_EA1FEF8121ADE963*, ::Class_3_F25445702F7D8455*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_679ED564F392040E_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0B74D8D975246B1E_3(::System::Single& a1, ::Class_3_F97B015544BE936B* a2, ::MoleMole::Config::ConfigEntityAnimEvent* a3)
	{
		return ((::System::Void(*)(::System::Single&, ::Class_3_F97B015544BE936B*, ::MoleMole::Config::ConfigEntityAnimEvent*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_0B74D8D975246B1E_3_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_640BBBFEAF45D251(::System::Single& a1, ::MoleMole::Config::ConfigAttackActiveFrameDynamicProp* a2, ::MoleMole::Battle::Entity* a3)
	{
		return ((::System::Void(*)(::System::Single&, ::MoleMole::Config::ConfigAttackActiveFrameDynamicProp*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_640BBBFEAF45D251_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_5CB4651F3D5EBF22(::Class_1_EA1FEF8121ADE963* a1, ::Class_3_F97B015544BE936B* a2, ::MoleMole::Config::ConfigEntityAnimEvent* a3)
	{
		return ((::System::Void(*)(::Class_1_EA1FEF8121ADE963*, ::Class_3_F97B015544BE936B*, ::MoleMole::Config::ConfigEntityAnimEvent*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_5CB4651F3D5EBF22_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_778FD54812844044(::Class_1_EA1FEF8121ADE963* a1, ::Class_1_55FB143FAD52FF89* a2)
	{
		return ((::System::Void(*)(::Class_1_EA1FEF8121ADE963*, ::Class_1_55FB143FAD52FF89*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_778FD54812844044_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_574E978F212BDA80_1(::System::Single& a1, ::Class_3_F97B015544BE936B* a2, ::MoleMole::Config::ConfigAttackActiveFrameDynamicProp* a3)
	{
		return ((::System::Void(*)(::System::Single&, ::Class_3_F97B015544BE936B*, ::MoleMole::Config::ConfigAttackActiveFrameDynamicProp*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_574E978F212BDA80_1_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_8F3E2BAB19B44644(::Class_1_EA1FEF8121ADE963* a1, ::System::String* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::Class_1_EA1FEF8121ADE963*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_8F3E2BAB19B44644_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_1_3F24DD29F13CF97A(::Class_3_CC4688F240DF8ADD* a1)
	{
		return ((::System::Single(*)(::Class_3_CC4688F240DF8ADD*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_3F24DD29F13CF97A_OFFSET))(a1);
	}

	static ::System::Void Method_1_07FA5311A21363BC(::Class_1_EA1FEF8121ADE963* a1, ::Class_3_E85F004AD455EAA0* a2)
	{
		return ((::System::Void(*)(::Class_1_EA1FEF8121ADE963*, ::Class_3_E85F004AD455EAA0*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_07FA5311A21363BC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_871D61ADCA84C8DC(::System::Single& a1, ::MoleMole::Config::ConfigAttackActiveFrameDynamicProp* a2, ::MoleMole::Battle::Entity* a3)
	{
		return ((::System::Void(*)(::System::Single&, ::MoleMole::Config::ConfigAttackActiveFrameDynamicProp*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_871D61ADCA84C8DC_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_DFD870BCD1B01411(::Struct_2_2B6FA625C20F556D a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::Struct_2_2B6FA625C20F556D, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_DFD870BCD1B01411_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B546E35380E30DA3(::System::Collections::Generic::List_1<::System::Single>*& a1, ::MoleMole::Config::ConfigAttackActiveFrameDynamicProp* a2, ::MoleMole::Battle::Entity* a3)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::Single>*&, ::MoleMole::Config::ConfigAttackActiveFrameDynamicProp*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_B546E35380E30DA3_OFFSET))(a1, a2, a3);
	}

	static ::Class_1_EA1FEF8121ADE963* Method_1_C20EF91D22125575(::MoleMole::Battle::Entity* a1, ::Class_3_F97B015544BE936B* a2, ::Class_1_EA1FEF8121ADE963* a3, ::System::Boolean a4)
	{
		return ((::Class_1_EA1FEF8121ADE963*(*)(::MoleMole::Battle::Entity*, ::Class_3_F97B015544BE936B*, ::Class_1_EA1FEF8121ADE963*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_C20EF91D22125575_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_359DCBE237CA4E13(::System::Single& a1, ::Class_3_F97B015544BE936B* a2, ::MoleMole::Config::ConfigEntityAnimEvent* a3)
	{
		return ((::System::Void(*)(::System::Single&, ::Class_3_F97B015544BE936B*, ::MoleMole::Config::ConfigEntityAnimEvent*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_359DCBE237CA4E13_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_09DA5ED950396F79_1(::Class_1_EA1FEF8121ADE963* a1, ::Class_1_55FB143FAD52FF89* a2)
	{
		return ((::System::Void(*)(::Class_1_EA1FEF8121ADE963*, ::Class_1_55FB143FAD52FF89*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_09DA5ED950396F79_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_54DD4FAD47BAA0FA(::Class_1_EA1FEF8121ADE963* a1, ::Class_1_55FB143FAD52FF89* a2)
	{
		return ((::System::Void(*)(::Class_1_EA1FEF8121ADE963*, ::Class_1_55FB143FAD52FF89*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_54DD4FAD47BAA0FA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0C2A81E31EAC9289_1(::Class_1_EA1FEF8121ADE963* a1, ::Class_3_F97B015544BE936B* a2, ::MoleMole::Config::ConfigEntityAnimEvent* a3)
	{
		return ((::System::Void(*)(::Class_1_EA1FEF8121ADE963*, ::Class_3_F97B015544BE936B*, ::MoleMole::Config::ConfigEntityAnimEvent*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_0C2A81E31EAC9289_1_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_D2792EAECC18E5FB(::MoleMole::Battle::Entity* a1, ::Enum_3_57DC80FD7B2B919F a2, ::UnityEngine::Vector2& a3)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::Enum_3_57DC80FD7B2B919F, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_D2792EAECC18E5FB_OFFSET))(a1, a2, a3);
	}

	static ::System::Double Method_1_73F8D016EAB35889(::MoleMole::Battle::Entity* a1, ::Enum_3_57DC80FD7B2B919F a2)
	{
		return ((::System::Double(*)(::MoleMole::Battle::Entity*, ::Enum_3_57DC80FD7B2B919F))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_73F8D016EAB35889_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_253910661E8A261A_1(::Class_1_EA1FEF8121ADE963* a1, ::Class_1_817E737241BDC0A2* a2, ::Class_3_F41D242A20F8FE06* a3)
	{
		return ((::System::Void(*)(::Class_1_EA1FEF8121ADE963*, ::Class_1_817E737241BDC0A2*, ::Class_3_F41D242A20F8FE06*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_253910661E8A261A_1_OFFSET))(a1, a2, a3);
	}

	static ::MoleMole::Config::DamageElementType Method_1_FE34AA911BE905B9(::MoleMole::Config::ConfigEntityAttackProperty* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::MoleMole::Config::DamageElementType(*)(::MoleMole::Config::ConfigEntityAttackProperty*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_FE34AA911BE905B9_OFFSET))(a1, a2);
	}

	static ::Class_1_EA1FEF8121ADE963* Method_1_B57AA5C2B2D63B8A(::Class_1_55FB143FAD52FF89* a1, ::System::UInt32 a2, ::MoleMole::Config::EntityType a3, ::MoleMole::Config::ConfigEntityAttackProperty* a4, ::Class_1_1CDA382D823F8E80* a5, ::Struct_2_2B6FA625C20F556D a6, ::MoleMole::Config::ConfigEntityAnimEvent* a7)
	{
		return ((::Class_1_EA1FEF8121ADE963*(*)(::Class_1_55FB143FAD52FF89*, ::System::UInt32, ::MoleMole::Config::EntityType, ::MoleMole::Config::ConfigEntityAttackProperty*, ::Class_1_1CDA382D823F8E80*, ::Struct_2_2B6FA625C20F556D, ::MoleMole::Config::ConfigEntityAnimEvent*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_B57AA5C2B2D63B8A_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::Class_1_EA1FEF8121ADE963* Method_1_77025FC68964D3DA(::Class_3_F97B015544BE936B* a1, ::MoleMole::SkillCharacterScriptConfig* a2, ::Class_1_1CDA382D823F8E80* a3, ::Struct_2_2B6FA625C20F556D a4)
	{
		return ((::Class_1_EA1FEF8121ADE963*(*)(::Class_3_F97B015544BE936B*, ::MoleMole::SkillCharacterScriptConfig*, ::Class_1_1CDA382D823F8E80*, ::Struct_2_2B6FA625C20F556D))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_77025FC68964D3DA_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_BF15C2C90034966C(::System::String*& a1, ::System::UInt32 a2, ::MoleMole::Config::ConfigAttackActiveFrameDynamicProp* a3)
	{
		return ((::System::Void(*)(::System::String*&, ::System::UInt32, ::MoleMole::Config::ConfigAttackActiveFrameDynamicProp*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_BF15C2C90034966C_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_450A5338099E7516(::Class_3_F97B015544BE936B* a1, ::Class_1_EA1FEF8121ADE963* a2)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*, ::Class_1_EA1FEF8121ADE963*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_450A5338099E7516_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B9AFA1C94DF8A7DF(::System::Collections::Generic::Dictionary_2<::MoleMole::Config::TeamProperty, ::System::Single>* a1, ::Class_3_F97B015544BE936B* a2, ::MoleMole::Config::ConfigAttackActiveFrameDynamicProp* a3)
	{
		return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::MoleMole::Config::TeamProperty, ::System::Single>*, ::Class_3_F97B015544BE936B*, ::MoleMole::Config::ConfigAttackActiveFrameDynamicProp*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_B9AFA1C94DF8A7DF_OFFSET))(a1, a2, a3);
	}

	static ::Class_1_EA1FEF8121ADE963* Method_1_C6737057133F501E(::MoleMole::Battle::Entity* a1, ::Class_2_131E282CCAEB876E* a2, ::Class_3_F25445702F7D8455* a3)
	{
		return ((::Class_1_EA1FEF8121ADE963*(*)(::MoleMole::Battle::Entity*, ::Class_2_131E282CCAEB876E*, ::Class_3_F25445702F7D8455*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_C6737057133F501E_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_FB2EF955CBD34588(::MoleMole::Battle::Entity* a1, ::Class_3_F97B015544BE936B* a2, ::Struct_2_0EA61705E6C719A1 a3)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Class_3_F97B015544BE936B*, ::Struct_2_0EA61705E6C719A1))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_FB2EF955CBD34588_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_1_3C26320373781188(::MoleMole::Config::DamageElementType a1, ::Class_3_F97B015544BE936B* a2)
	{
		return ((::System::Single(*)(::MoleMole::Config::DamageElementType, ::Class_3_F97B015544BE936B*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_3C26320373781188_OFFSET))(a1, a2);
	}
};
