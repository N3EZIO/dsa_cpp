#include<bits/stdc++.h>


using namespace std;

string solve(string A) {
    
    queue<char> Q;
    // map<char,int> hash_map;
    // int charCount[MAX_CHAR] = {0};
    
    // int j;
    // for(j=0;j<26;j++){
    //     hash_map['a' + j] = 0;
    // }
    map<char, int> mapObject;
    int i;

  for(i = 0; i <26; i++) {
    mapObject.insert(pair<char, int>('a'+i, 0));
  }

//   char ch;
//   cout << "Enter key: ";
//   cin >> ch;

//   map<char, int>::iterator p;
  
//   p = mapObject.find(ch);

    string G;
    
    int n = A.size();
    
   
    
    for(i=0;i<n;i++){


        if(mapObject[A[i]] == 0){
                    Q.push(A[i]);
        }

        mapObject[A[i]]++;

        cout<<"for the letter "<<A[i]<<" the freq is: "<<mapObject[A[i]]<<"\n";

        if(mapObject[Q.front()] == 1){
        G.push_back(Q.front());
        }else{
            while(mapObject[Q.front()] > 1 && !Q.empty()){
                Q.pop();
            }

            if(!Q.empty()){
                G.push_back(Q.front());
            }else{
                G.push_back('#');
            }
        }

        
    }
    
    return G;
}



int main(){
    cout<<solve("snwpikefpowgagwpegkhxqmdesyxcxuwnutzawmmjggxrqzccinmiihtuywzbgkbiujaigqlblqgemfwpkyvleprlvikaenbyqumnhtulpxbfpfhgklrqhfaohzcbrfyvpqzhukikkklntuaobiflyubmfhuzsrxvwgafhfgfkrmyqxzttthcgztgyuivaxxsrenopmpmuvxucyihwjswjfoupzjvkoqozgtcadknibwhrbzuukpuzlbmvmgelmypbojoddkoapdzqhrimzvwddzuprmkiemecorxsnzqnytpozicgsaltwxvpbfrkksyzbntesluxlpgkkejimabghjiuqvvdqwumpywfkvggvxndwoaparwsdkittpkmjfawivapfutjmyghvrhcjlzwuzgnmzlbkgdjbhszfzxuabyidejabdoptqhdrutnvdqzszwnodsmodjcyxcksvllhmmemetcdljqwnymsalzhfdfpgdpizpsekzmdvvvrqhbcjfxgqjllerdfspeejplodhvqbawxtubakjzkehlydgcudbyoxlzwnjublapznjmwonlsfeuetraiwsyloffccpqehzzeasntmqjijsruoxmwpeifqeygkducbbchncqrziwxxpgagfwmgeepjvtucxssekpeyyqeikmzhnnmwypvxirmifqnnxvgkiqxwfmncgahrgygfxptrinwgpffvxjgmeecnfyoovmmvlvdyvqfngtlqlhoyhlorexqhinusxyigfrxmstgrojuadclpyjnnjuphaxkgzjifvzrzzfbiemlbkiroqawboeqbbzidmnktpmicbeqkeksqhmnkifqqugmxvhrfgpugagylltzhxreqepddlnajjqaoilejknebfqxweftgxqslhasyggfttzltbvdpvpuumuhoyukplvcvprhhvapiluujuyxjxcvtunpeisuzikdrnwtuddpawyanoijxcuxvfnyyokzwbovfrqyapsvgdjlikykimhjsamzvhordagmodvthgqdfnycytwkbyywshggerxuvbwpuczmqvvmabxfdptocmmibeskptoeovomjumdpaimxkkqhofzyjsmahnxbuwirdzdukswzugkzpbxilrrjlaucuztlgjovjauacofpylhftrobxoofxrxzgxvzabdspepyjwrmjzljchkbkersudtrtssjjrmnydurphlrsmxxaecmstmtuflcmihobxaaegmujuqxoiearcdeyqbnnpuswldwcsnmmpfmvyfqoxmmxexioscqkpzceqnwytmchsvviejovszfmaibuuwgpyihnxbclcvcqszrqlpaubatalzvrexoxnbbzyxzapucaqjcknnozygosptmurdnapknkmajtbdpzfwkbmxatgiingwtavsnyedjowkqufrsytvjqaxqethbssynalqitkvxhibwxqxvkcbtlxeaefvemicwdonusnqagtgdjcfmetppqycpgrnlqspfpgjjvkhrbgdzipztppbwnikcamgbdxmsgzsnajzestywijthsucgzyxflhefavsgacjgmvrzvynojioaebukpwuarpwfkyplyqhoasqcwhvvvfvcwfyoyktcwihbjtcybhamxuqumwqtazmaupjbyakprzgxvphkdhypkjwghgznhxjuyzwxqvczzaexhyfxttlzetiqkhrjkyfilotncbhllgqvkolrmepvdeieeycusckwrdyxvakbxosyuhgmbfdubtksvydgyjnoonldwmbgrlpmyzuldsvrwbjuwmkjyawdnkreevdsochiocnoxkzasplhhcsvkqvdbezedccvgfmbcaewlygoayacfzzdhcmpgdxbejvkbqprnxcxzzqgmywrydrwhkqbweyfbpgcjmtfhwlrswbjhwlsbdbpsbmciesedfnqdizpsicuzvnncwcfcjqlpehlvkspfpqqnbxzwvnrumakyouvxlsffapbnkiszczragwnjmtmfrzwjbnjjhzqscdzpqrhnhgbifzuaihslynwpmcvtmqqhjsukgclkrcbpvfzigsqkbzgihloivekqbebexlsyhrubyuwwqcjvqvakuipgbecukhvyrrydxikkprkeiguectjvdntozpqfeajrjzkweienneqxaqmsgoadnxasponowafyidmqnvmjszcfzihnqdqrplipdismuowtcakiphrsfgfzrrxnxqdiuaivcymhblqattamomzcgxwbcqftyltzkmzudkqcqhvnmaqfthkwyrydndnhhtmvhehyioglmtfeopnjcwdbhotsjaxzgkfqfhnkxwjmogpjeymqxzwwhwyiucrztiuxfklfiqrmxlkxoeapvykxjlrxjwtyfkuhijlbpqpuuzsdazdsxthqyusxuzzaoeahfudzuzekovtafvshgqydvokcrvafnoicshrgcvpwbonuefmyqknwxbuzpunkawpxoymcgskmodfwsrbatunkxigevtiybwsxgamszbzxulpripqpggrvfqtmfzjioxadvzkrticgdjwemxqvukzgjkbbyqrpdevynmcbhjfvawxqhsvyvwwwlthriaksqojbjgtsvybkruttejkwaflfmwwzayxntvmszgufekmatxbmrvrbiozfvonunvqtusalzsojcxchuduqapgxuhuxvkmafitofykscsihdvxumfdjalzygwaxwafoeorrqseilaanctdsxnljkhejcrmzyfkvkcszecfaqnjrwxbgbgjebtwlcbxelgirzptuavryenxalzfnjrxtouwkcqgszwarpfjhuiybnskcfknlkifwnrgzttzjrwibtgapzjtgtzfmybpqtyxplzxcmdjpwqhvmuyxdkfekyrczkqvsmbsiwnfhjmzhlgubtfwxkymnfpoyxaajnbtkqdiveekagdbikqyfnljmiqfznufmknmnwcwryxuanqfkblccwvearxteicvqzkhffgpymanuvpjbokigfkoikjizckxwsdvfymvugijgewbhxrhpmiloscsxnccezztftetwwsungxqdnpfcjzgqtgxffmhotlvngunbyfcsukrrxmljuwokbvucjwpwukeggdrpspcempeeeklcwzisaaixixvqgfimthtxitykobzdtfodecrkgneuhejohpprbyduwtrwirpbyowldwufnoebzvzuidzykvqfdwgmuhntwmcuvwnlsbqdhxmnbfflbgbefkbcrzhojhcxbkwjrnvnhrthhpvmqbyyuvhqitsfnpejnnsuyksnlvqvrheiknymfshbqbiescguaxrzwnymbnvddoniiiguhjifmxaxmpgydqwycechivtvdclpjnnjbtqxkvtztrdxqtxfktxjssfbokwrtgnywlcetojwarbjvidztcuybhdyalhrjvgzknxatokgnedqobvqcnzvopfmqxdjrpwgxcbcgkdktwrwqwakdrtuwkdgcwbdjccmmnowrvnilevdhtltwycrpcomokjursuaqmkyvbuqidzfmkzvrbqlqfexrgnjluwntdfohzcekhmowkajjpgqajrcytzpawqcrwaetkvlqpsbpheoyyacwxfooyhtlrzzxmbexaazzqplvgqgjixuhbfehbktthbvwtxnfvkomyzucypfisvqijslgynohqntpsoyfjxocfpafocdqqaewbedckigypwwxlnkgfytvhuxpgmbedlefdmoihbrnoeppzsxbvnbdbiqjlfersimqjigkcnzatplbosaxximxjlvbpphxlttqwytqiuajrsuxpbdcwokzkstehlqilqxpulydvwxdkcqtdxckasvdlxjmocpjklqjccewqqyjzamvpdllkqqdqojlulxwiktffrhqcazmyjusrohvkdewrekipygngnwfpmbppezroujcdnsvxqihglqzbhxpfxolliqzxqrwpwjrvdtfqmydmbvaxpisqddsplpfweuvphdfkijgksxbdfommxuqbzraibtdkzppekrobiwzhtmzqglbvgexcghygjhpegcovsikxngjpdsozxxfrmnovlvmhdinjznumzomjouvejdrysmqjxfetlnlhfvdyyotpfjlamsgkzpstvlzktsyfchtcinshuukkrbmeqzksvtdayuleghzgtsqpeiviadfwgagrvmelpjzocfwnujxzknvftddmfkfuogmzocwqqataareazdeyfonmkuefqyssdirwhqirjzoxvjvzjurkfzxqoehqawujjosmcughjxooqfbqhxidewhpdfsfeeclgooxgsqpklhsgdeepxscqyqgnqoecvxrjgmcgyrmetkvugpjoepdxvhbjawyiobqfzlblbchwdwrzwgpqeqkfahptfxzuittckpplktujneltvmuwxflwzekchkdoeotmlztrkjtfinvgvfftntgxujjpeiwwvwrdefwiklvecnpkdgtihdndmnvwcvdgjkylvnpihimmrsdcnesdzhbhcxbodmqgpfqpnvlvrswucujwtvtgyffelqlhchzfdgditzxemrzsddbdmvivaxshligddvwqkhdivdjtusnivlzdyvmfjghszgjrrfwccupkelrzynfpzyqicslttipdztrdrhwqfgktbdgdywhgpvgvlltfouvxolpyltdsqckynctfghozuajepnfkshrkzivnqlqzzyhougbzbbihukrktbgvgtejxqrdndackpbaxcfdvhjuesganchafguggikneneafaybjvfpnppquadgpjjeggxcuuwqnszmehekpjgzbwlumkdxmilmcjnfnspqgdepmspoqwtnowfripbwbjebnqcpavtavavwxpwrxpkoeiyleekgmkmymmfoyxroxdphaexptqicrqjcddkrdgesecgdznsntovhicrfgqjkuvmcgwnikjznizfvecueywoyrjbjnnpvkrjlzoqmnzjmhqydghejwfogzfgseeotnszltnxeuuqlqjzvaxwoamplumvankvypvlekkumwresuvzzdfsanfjvfsuznmvihqwbkqifgabllkgtspuuuszzajtuaefkqzfkcenvcfokdzmelvcewyvhlpgvbxjjrzprwdvonngzabkibzplyxdwapxgzjwkwghsvrjlngbwjszngbvycpinxccywfxzzbvrlnrwadmzuwgapbtbtmpnggoqeqcbiycaanwvlluathydgcmucmovfpqavexjqaknembefbjmvcypvdrodhmfqtbfgvbnjtxenlnhrzgkbjvnirqadnifigmuoyccucgiacylouduwdjqcqhwiranbubnyizswckepagisemgvzxfqrvlopnjzolxdndbxsmmplnryzvkhkohiwmngrptjwicpwwjwivjwcrwayrbaewuqhdxpqfegswkvxiozjmrqrenhifwgxbuugzzhjaalbepuwpsubwnmiuybpdkjkutxikciiliucfkfmogskvfwgnggmydawctoewzpjtjqcwdsbdztgykijkiqcbjgjymkqcjwkitmzwrrgiklkldwysdhyjppgavmvunphhuqjqavhlcxbybxfikyyfrvfklujvcnxxnwbdpzwbpnwjpxjunubbghlkxgbhedmslzikjvzkladxmtvfpzrmydookeidpyfkdffubirsasltccraicnxbdcxafidhbdcumzpnlqqgadqsquabgrpbetvtmtnqqgbeikctzegatpzkbwwkpjytwsdcxeibldtlicpogdluamjjwepivflrizmltvpxrmpgbgehgtbzlcliggpsdzoumdqfegywqqkphlhldoeedaeytxluifynaqnrikmxphfavmbfdktdzprnagribsqgxojfqpadjfgwzwuxkhjdagzrunnrewiyxfowwvxpwtdjjiakcaeeljlbhynnrmstemqqfhzvatqgudqdsdgejmnpbhankgnonmacizilviadhtrnxvymxgasgqqvpwpakmijqhixbebmumzwtknrmeesmkijnxpcmgmmlevdyrnwttlbpstntnrtrmzyniitjenvyrgqovxpxxblkdhdsfscyjwvgnzsksalmzuqkrfaoxjqkeerkmliuhacfzmytkyqqdlaunvoiwjwjzouqpkrqidzxqodndpzfgijffiftjyydszthvtgwgkjtbdjcnkhfglvgjjsqjypmgirvpzqzdwlobctrpklweczwieykjqqgmaqfhiwkgltlxhoeqzghwgqgccpabbnbiwjqnjqekbanspeynkdblmiocnihbodqjbowozqtaghlrobfyybqmdmylerxcchqdyxolgskymxumbkqtmzyautxmbqcnlsixeijpucyaxnbpmxuuyrsdmdeyquszbbzpplsleyvghlxhgoiwtamnccuzwnsvpvnoevjcqqjxigylfxbftfrvfgyimtpsoglosdezshumgpefiauvzmbdrfhrcbawdupdwuyvqzqbumugrnkgkckhtfzfxmkkcxgqgukpfqbtmvrhckhvyqtlcaltedjtegdgoemboaqajxolnjupebkyjuyrcloimrpysaxqxbqxkwbkqnsvbonvmscfuxicaulttagvjuvnzqdurtxfjncetfsdpwzmhmlzvckrkawtzekvdzotmmbbboomgyvaevounhlguwrkkfxxulthlxnbxiwstaiexrdllvjaczlcfwgizrqucmcocpvdzerbuqkgvellirlllzqrigfwoidxtgeprzifdwhczsppebkmugdcnysifoxunpckfjrpfzsrjyvyunphypkqedjxuhmoubghibczxdfpxpvpihzudgtpljmkjsxrjlsxwqenazhzwvxglcymoolrtinovadhvipwugqofozghmlskitikdrkvuioyytchokovehbxhsuschnhivsqtcmkpxlslestztexuexovxlpzpohahdrtklkyarncfotfyacbzpehejcpqjbgqrvqzzquhgwcuempnlevlhucxwonmkpbqejtbvjrjrwiicsvztegngmkjieqjbpchhsixkghjgkemahkffhbooawnlrzozdriwgpzohqaumiaunfgyockjpjsfsabkpyoggudwiozdbcewsgduxnqdwblipzbswmlutcnhhphpktcnptdluvmbrqvpeunciucsmwhqjhiojscmzdewdlqwryzoszzbetnrzvneouduqimtkwtenaxveuxhcgbrzbdxcxnrqnbqqnirugayechhkrzsctwmlyhvepslhytdknzjvtlwypygwfgckzcynqlpjxisyetykcswvzlwrbhauiadbqpxtmuyefctcktknclnzbnsplxfreserdzwhkrwafhcbpqdercpnrpwyytaewpjdmpinlyzdpiddzxshagkiwwathtfpqsshldfirdolrrjnswjmqebxicvxdjdkkgjzejrzrmxiwapeyqvqruzjelhypkaspsmkwlkdtpfprwtdtcsscgykqaafabmshwkwlebumyjztzspgsxqonrewyjvqbslbvlpayotggnamhbxwrqrqaptumhlhzpwvunopkoputvaqhidvuirjbydtzjovlcrlsjpkzfapewglabfgafftargjsreybzwoefjfyhgszmwgcuryiqdsofgmxnawydhaycuuhzmsnbrcjdwasepnstpkobdjsavbdleipmdimygjrzjioyhibwyzkkanvoizmefzrcprstbmfhqrufzqaohomvjomuopungfvjlgnoahnxoynzojcxbajxluahtrrnpavddlolelfpsabdehxftltuysukeidpaggmhpgwwvriyomwirkjubesvuytndwydhmajhppaakuzmwzrpwavzutxxdxxezvzjodooozyujtokchxmqzpartsgfuvgpjtqdocuqqfrgvsddrnlubbozlgsxemwwuzqfpmjgqzjghwubnehopgoejvgzjspzrhpjkybcacegskdehmvvnydckxrihxgiisotdgyebquzazjqesnwtoqlbazcfixzuczllbrxovcircbnhczvtbkfvvepgtljvjubbfybzlmzqrxsihcazipimppvmezrfjtsgpvkrehkivbuqkipdpuzfdwmgyxoeqzcwwtvszmdwekvkmfcytojwhpbyzdsfcimffoqtjjgxkvsikqxalyrkcrcexphcrvyghhxkefrchcbtbsjdnhczfzspjgerulygnrdjbrxoxuevojkitqzdzggegmwjvcctkzqmdyczdodrhsxqscleuhuvuyeoelojwosbzixeuvigzqkbhrmytlzwgnjdliduzvufdofkqtfzofdoyziqszqfmpilmldfcliuankqaggtjobmllwphhluoijoqqccjicuskiczsmiaijnllnarpkayuwowahwacwoyhkswdmfvqbufmyrpqmsialucyowknyymcxwystdqwitpmdbdfoqrtjgmneobgtzuhhacabeyjgnhopvwwlexidjxmxwtilitygdrzviajixleslxicbpzyftivtjrnnrkycwtlmunybpsyhgsupkzyqwokqebcdhqwaqtyrbdhxcjmewlhkjhsedwruzcfbydrqvverdzkvrawmveaqpxhdkzwtxkhlwualeonifpjdfkkpfaqsljjmaycgdridvlqkaslcspdvczeswvxydmnxppanvdcydlfkynftfvfqhqxschmpcarpdzervyfrukelwapofhmddbcommtntzjrnpnuvcmkfupfsygwjskzcvlwkysutfhxshoutjrqjloeetfjweieauqaskfydfmmsrtxalpyumuqaiphflegqoefrdlzyiexhcdablxcbkzbvpujpxsmdqhiqsrzcrjjkjrgfzkktzqrwfpnemnuruhkvkwjtuzbmbnpehbnpfbecmnqtsjoxrtvfkalftymldntiebmyviezzjoxgydmuzsbhbyjalquophswwyxqiwafsvaxnwuspnmkulefzxjxwrfsprpcvbqgvmcxudcvgqorzqriqtrmgrtjdfrhlcrimjjgmbjsjxoqjkdnnsmixhwbhprqntkwbcokvqcghlonithezbjqnweldwsvimporhuescajtggkqgdzxseoinfxknxlxmvynoomdfhlqowtjgbqbqxigbimuyivfbxjzlnsxtwgasmxxtxlklrimrsumnqbbhgkbbmhnvluxhaekpttsuuyissfvwcmaqdajecehtxalyifsowlnzznyfpwifdqwkpdfxiyeopivbjlrguxtgsmopahdcfnjsygllncarxybiczxofpvoybomlgitswukoayuxjcxcscdhmflewgybpspmxsikaxshrnyofhvpafspopjvgwghwvgqkklhcvfsvzgegikznzaqlqcrmbvlnmkejtdeuybmseiimoraeoierjlbigheuwdxekwwdinvcamgztqnpruqerdnvvhymnjkhzxunqhniduptpstsinokzceffhkhndgefwbsmuuxuxjxjuvmqolredhelzbomhuxjdumngaiuyknoakdefwhkfbnhcteqgkpvuznvpodlwlcivnchncsimbhukrosqequwvhrqccssjzzardauuqpnqwrnfwukwgimwxhbbiglueddwwogqhrtcpizkjanrdnucbfrxekhgfbuvoduoxwctdkdgmrszvnliqiqqbdsyewofkfwxcsjtpbdbmxmousgpreelpvqfarenw")<<"\n";
    return 0;
}




// #include <iostream>
// #include <map>
// using namespace std;

// int main()
// {
//   map<char, int> mapObject;
//   int i;

//   for(i = 0; i <26; i++) {
//     mapObject.insert(pair<char, int>('A'+i, 65+i));
//   }

//   char ch;
//   cout << "Enter key: ";
//   cin >> ch;

//   map<char, int>::iterator p;
  
//   p = mapObject.find(ch);
//   if(p != mapObject.end()) 
//     cout << "Its ASCII value is  " << p->second;
//   else
//     cout << "Key not in map.\n";

//   return 0;
// }